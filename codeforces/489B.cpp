#include <iostream>
#include <algorithm>
using namespace std;

int h[102];
int m[102];

bool verify(int h, int m){
	if (h - 1 == m || h == m || h + 1 == m) return true;
	return false;
}

bool dfs(int no, int tam){
	for (int i=0; i<tam; i++){
		if (verify(h[no], m[i])){
			m[i] = -1;
			h[no] = -1;
			return true;
		}
	}
	h[no] = -1;
	return false;
}

int main(){
	int n, x;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> h[i];
	} 
	cin >> x;
	for (int i=0; i<x; i++){
		cin >> m[i];
	}
	sort(m, m+x);
	sort(h, h+n);
	
	int pair = 0;
	for (int i=0; i<n; i++){
		if (h[i] != -1){
			if (dfs(i, x)) pair += 1;
		}
	}
	cout << pair << endl;
	return 0;
}