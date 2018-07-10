#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int num_notas;
	cin >> num_notas;
	
	int tecla;
	vector<int> mod(num_notas);
	int notas_maiores[] = {0,2,4,5,7,9,11,12};
	string nomes_notas[] = {"do", "re", "re#", "mi", "fa", "fa#", "sol", "sol#", "la", "la#", "si"};
	
	
	for(int i = 0; i < num_notas; i++){
		cin >> tecla;
		mod[i] = (tecla - 1) % 12;
	}
	
	bool result = false;
	int h;
	for(int i = 0; i < 12; i++){
		vector<int> valid(12,0);
		for(int j = 0; j < 7; j++){
			valid[(i + notas_maiores[j]) % 12] = true;
		}
	
		bool x = true;
		for(int j = 0; j < mod.size(); j++){
			x &= valid[mod[j]];
		}
		if(x){
			result = true;
			h = i;
			break;
		}
		
	}
	
	
	if(!result){
		cout << "desafinado" << endl;
	}else{
		cout << nomes_notas[h] << endl;
	}

	return 0;
}
