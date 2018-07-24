#include <iostream>
#include <set>
using namespace std;

int main(){
	int n; 
	cin >> n;
	int matriz[n][n];
	set<int> list;
	
	for(int i=0; i < n; i++){
		for(int j=0; j < n; j++){
			cin >> matriz[i][j];
		}
	}
	
	int x,y;
	for(int k=0; k < n*2; k++){
		cin >> x >> y;
		list.insert(matriz[x-1][y-1]);
	}
	
	cout << list.size() << endl;
}
