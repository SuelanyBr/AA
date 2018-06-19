#include <iostream>
#include <set>
using namespace std;

bool contem(set< pair<int,int> > pares, int num1, int num2){
	if(pares.find(make_pair(num1,num2)) != pares.end()){
		return true;
		
	}else return false;
}

int main(){
	int N, num_a, num_b;
	set< pair<int,int> > pares;
	while (cin >> N){
	
		int lista_A[N] = {0};
	
		for(int i=0; i < N; i++){
			cin >> num_a;
			lista_A[i] = num_a;
		}
	
		for(int k=0; k < N; k++){
			cin >> num_b;
		
			for(int i=0; i < N; i++){
			
				if(num_b != lista_A[i]){
					if(!contem(pares, num_b,lista_A[i])){
						pares.insert(make_pair(num_b,lista_A[i]));
					}
					pares.insert(make_pair(lista_A[i],num_b));
				}
		
			}
		}
	
		cout << pares.size() << endl;
	}

}
