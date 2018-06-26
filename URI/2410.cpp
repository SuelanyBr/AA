#include <iostream>
#include <set>
using namespace std;

int main(){
	int N,M;
	set<int> conjunto;
	
	cin >> N;
	
	for(int i = 0; i < N; i++){
		
		cin >> M;
		conjunto.insert(M);
		
	}
	
	cout << (int) conjunto.size() << endl;
	
}