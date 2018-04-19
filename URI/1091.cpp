#include <iostream>
using namespace std;

int main(){
	//K: numeros de consultas
	//N e M: Coordenadas de um ponto divisor
	int K,N,M;
	int X,Y;
	
	while (1){
		cin >> K;
		if (K == 0) break;
		
		cin >> N >> M;
		for (int i = 0; i < K; i++){
			cin >> X >> Y;
			
			if (X == N || Y == M){
				cout << "divisa" << endl;
			}else if (X > N){
				if(Y > M){
					cout << "NE" << endl;
				}else
					cout << "SE" << endl;
			}else
				if(Y > M){
					cout << "NO" << endl;
				}else
					cout << "SO" << endl;
		}
	}


	return 0;
}