#include <iostream>
using namespace std;

int main(){

	int num_carros, voltas;
	int primeiro = 0, segundo = 0, terceiro = 0;
	int primeiro_c = 0;
	int segundo_c = 0;
	int terceiro_c = 0;
	
	int n;
	int cont = 0;
	
	int aux1,aux2,aux3;
	cin >> num_carros >> voltas;
	
	for(int i = 1; i < num_carros+1; i++){
		
		for(int j = 0; j < voltas; j++){
			cin >> n;
			cont += n;	
		}
		
		if(cont < primeiro_c || primeiro_c == 0 ){
			terceiro_c = segundo_c;
			segundo_c = primeiro_c;
			primeiro_c = cont;
			
			terceiro = segundo;
			segundo = primeiro;
			primeiro = i;
			
		}else if(cont < segundo_c || segundo_c == 0){
			terceiro_c = segundo_c;
			segundo_c = cont;
			
			terceiro = segundo;
			segundo = i;
			
		}else if(cont < terceiro_c || terceiro_c == 0){
			terceiro_c = cont;
			terceiro = i;
			
		}
		
		cont = 0;
	}
	
	cout << primeiro << endl;
	cout << segundo << endl;
	cout << terceiro << endl;
	

}