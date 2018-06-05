#include <iostream>
#include <list>
#include <queue>
#include <algorithm>
using namespace std;

class Graph{
    int numVertices;
    list<int> *adj;
    
public:
    Graph(int V);
    void addAresta(int V1, int V2);
	bool bfs(int s);
	bool isCyclic();
	bool isCyclicUtil(int v, bool visited[], int parent);

};
 
Graph::Graph(int vertices){
    this->numVertices = vertices;
    adj = new list<int>[vertices];
}
 
void Graph::addAresta(int V1, int V2){
    adj[V1].push_back(V2);
}

bool Graph::bfs(int s){
	bool *visitados = new bool[numVertices];
    for(int i = 0; i < numVertices; i++){
        visitados[i] = false;
	}
	
	queue<int> q;
	
	visitados[s] = true;
    q.push(s);
	
	list<int>::iterator i;
	
    while( !q.empty() ){
		s = q.front();
        q.pop();
		
		for (i = adj[s].begin(); i != adj[s].end(); i++){
			if (!visitados[*i]){
				visitados[*i] = true;
                q.push(*i);
            }
        }
    }
	
	for(int j=0; j < numVertices; j++){
		if(visitados[j] == false){
			return false;
		}
	}
	return true;
}


bool Graph::isCyclicUtil(int v, bool visited[], int parent){
   
    visited[v] = true;
 
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i){
        if (!visited[*i]){
           if (isCyclicUtil(*i, visited, v)) return true;
        }
 
        else if (*i != parent)
           return true;
    }
    return false;
}
 
bool Graph::isCyclic(){
    
    bool *visited = new bool[numVertices];
    for (int i = 0; i < numVertices; i++)
        visited[i] = false;
 
    for (int u = 0; u < numVertices; u++)
        if (!visited[u])
          if (isCyclicUtil(u, visited, -1))
             return true;
 
    return false;
}

 
int main(){
	int N,M;
	cin >> N >> M;
	
	int V1,V2;
	
	Graph g(N);
	
	for(int i = 0; i < M; i++){
		cin >> V1 >> V2;
		g.addAresta(V1, V2);
	}
	
	bool resp = g.bfs(1);
	if(resp){
		if(g.isCyclic()){
			cout << "NO" << endl;
		}else{
			cout << "YES" << endl;
		}
	}else{
		cout << "NO" << endl;
	}
	

    return 0;
}
