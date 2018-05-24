#include <iostream>
#include <list>
#include <algorithm>
#define MAX 1000
#define ll long long int
using namespace std;

class Graph{
    ll numVertices;
    list<ll> *adj;
    
public:
    Graph(ll V);
    void addAresta(ll V1, ll V2);
	void addVizinhos(ll v1, ll v2);
	int sizeList(ll V1);

};
 
Graph::Graph(ll vertices){
    numVertices = vertices;
    adj = new list<ll>[vertices];
}
 
void Graph::addAresta(ll V1, ll V2){
    adj[V1].push_front(V2);
	adj[V2].push_front(V1);
}

void Graph::addVizinhos(ll v1, ll v2){
	for (list<ll>::iterator it = adj[v1].begin(); it != adj[v1].end(); it++){
		if(*it != v2){
			ll x = *it;
			adj[x].push_front(v2);
		}
			
	}
}

int Graph::sizeList(ll V1){
    return adj[V1].size();
}

 
int main(){
	ll N,M;
	ll V1,V2;
	ll E;
	while(cin >> N >> M){
		
		Graph g(N);
		for(ll i = 0; i < M; i++){
			cin >> V1 >> V2;
			
			g.addAresta(V1, V2);
			
			g.addVizinhos(V1,V2);
			g.addVizinhos(V2,V1);
		}
		
	
		cin >> E;
		
		//ll x = g.sizeList(E);
		//cout << x+1 << endl;
		
	}
    return 0;
}
