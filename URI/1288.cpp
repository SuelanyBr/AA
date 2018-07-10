#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int DP[55][105] = {0};
	int K, capacidade, dano, peso, resistencia;
	
	int N;
	cin >> N;
	while(N--){
		
		cin >> K;
		for (int i = 1 ; i <= K ; i++){
			cin >> dano >> peso;
			for (int j = 1 ; j <= 101; j++){
				if (j < peso) DP[i][j] = DP[i - 1][j];
				else
					DP[i][j] = max(DP[i-1][j], DP[i - 1][j - peso] + dano);
			}
		}
		
		cin >> capacidade >> resistencia;
		
		if (DP[K][capacidade] >= resistencia){
			cout << "Missao completada com sucesso\n";
		} else{
			cout << "Falha na missao\n";
		}
	}
}
