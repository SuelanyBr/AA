#include <iostream>
#include <list>
#include <algorithm>
#define MAX 1000
using namespace std;

class Graph{
    int numVertices;
    list<int> *adj;
    
public:
    Graph(int V);
    void addAresta(int V1, int V2);
	void addVizinhos(Graph g, int v1, int v2);
	int sizeList(int V1);
	void printList();
};
 
Graph::Graph(int vertices){
    numVertices = vertices;
    adj = new list<int>[vertices];
}
 
void Graph::addAresta(int V1, int V2){
    adj[V1].push_front(V2);
}

void Graph::addVizinhos(Graph g,int v1, int v2){
	cout << "adj[v1]: " << endl; 
	list<int>::iterator it2 = find(adj[v1].begin(), adj[v1].end(), v2);
	
	if(it2 == adj[v1].end()){
		for (std::list<int>::iterator it = adj[v1].begin(); it != adj[v1].end(); it++){
			g.addAresta(*it,v2);
			cout << *it << endl; 
		}
	}
	
}

int Graph::sizeList(int V1){
    return adj[V1].size();
}

void Graph::printList(){
	cout << "Print List: " << endl;
	
	cout << adj << endl; 
	
}
 
 
int main(){
	int N,M;
	int V1,V2;
	int E;
	while(cin >> N >> M){
		
		Graph g(MAX);
		for(int i = 0; i < M; i++){
			cin >> V1 >> V2;
			g.addAresta(V1, V2);
			g.addAresta(V2, V1);
			g.addVizinhos(g,V1,V2);
			g.addVizinhos(g,V2,V1);
		}
		
	
		cin >> E;
		
		int x = g.sizeList(E);
		cout << x << endl;
		
	}
    return 0;
}
