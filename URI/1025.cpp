#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
	int qtd_casos = 0;
	int N,Q;
	vector<int> dados;
	pair<vector<int>::iterator,vector<int>::iterator> pos;
	int k;
	int it = 0;
	
	cin >> N >> Q;
	while(N != 0 && Q != 0){
		dados.clear();
		qtd_casos++;
		it++;
		
		for(int i=0; i < N; i++){
			cin >> k;
			dados.push_back(k);
		}
		
		sort(dados.begin(),dados.end());
		
		int number;
		cout << "CASE# " << it << ":" << endl;


		for(int j = 0; j < Q; j++){
			cin >> number;
			bool achei = binary_search( dados.begin(), dados.end(),number );
			if( achei ){
				pos = equal_range(dados.begin(), dados.end(), number);
				cout << number << " found at " << pos.first - dados.begin()+1 << endl;
			}else{
				cout << number << " not found" << endl;
			}
		
		}
		cin >> N >> Q;
		
	}
}