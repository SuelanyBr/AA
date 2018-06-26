# coding: utf-8
445B CODEFORCES
def get_par(x):
    if x == par[x]:
        return par[x]
    else:
        par[x] = get_par(par[x])
        return par[x]

def union (x, y):
    par_x = get_par(x)
    par_y = get_par(y)
    par[par_y] = par_x

def is_same_set(x, y):
    return get_par(x) == get_par(y)


a, b = map(int, raw_input().split())

par = [i for i in range(a + 1)]
cont = 1
for i in xrange(b):
    c, d = map(int, raw_input().split())
    if not is_same_set(c, d):
        union(c, d)
        cont *= 2
print cont


490B CODEFORCES
a=int(raw_input())
res=''
dic={}
a1=set([])
b=set([])
for n in xrange(a):
    x,y=map(int,raw_input().split())
    dic[x]=y
    a1.add(x)
    b.add(y)
x=dic[0]
x2=a1.difference(b)
for k in x2:
    x1=k
for i in xrange(a):
    if i%2==1:
        res+=str(x)+' '
        if x in dic:
            x=dic[x]
    else:
        res+=str(x1)+' '
        if x1 in dic:
            x1=dic[x1]
print res[:-1]

20C CODEFORCES
#include <bits/stdc++.h>
using namespace std;

#define MAX 100010
#define INF 100001000000
 
long long dist[MAX];
long long pais[MAX];
 
void dijkstra(long long v, vector< pair<long long, long long> > ladj[]){
	dist[v] = 0;
	priority_queue< pair<long long, long long> > pq;
	pq.push(make_pair(-dist[v], v));
	
	while(!pq.empty()){
		long long vert = pq.top().second; pq.pop();
		for(unsigned i=0; i<ladj[vert].size(); i++){
			if(dist[ladj[vert][i].first] > dist[vert] + ladj[vert][i].second){
				dist[ladj[vert][i].first] = dist[vert] + ladj[vert][i].second;
				pq.push(make_pair(-dist[ladj[vert][i].first], ladj[vert][i].first));
				pais[ladj[vert][i].first] = vert;
			}
		}
	}
	
	return;
}

int main(){
	long long v, k;
	cin >> v >> k;
	for(int i=1; i<=v; i++) dist[i] = INF;
	vector< pair<long long, long long> > ladj[v+1];
	long long a, b, c;
	while(k--){
		cin >> a >> b >> c;
		ladj[a].push_back(make_pair(b, c));
		ladj[b].push_back(make_pair(a, c));
	}
	pais[1] = -1;
	dijkstra(1, ladj);
	if(dist[v] == INF){
		cout << -1 << endl;
		return 0;
	}
	stack<long long> imprimir;
	long long x = v;
	while(x != -1){
		imprimir.push(x);
		x = pais[x];
	}
	while(imprimir.size() > 1){
		cout << imprimir.top() << " ";
		imprimir.pop();
	}
	cout << imprimir.top() << endl;
	return 0;
}
