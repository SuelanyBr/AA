#include <bits/stdc++.h>
using namespace std;

long long dp[50][50];
int tempo[200], qtd_pizza[200];

long long go(int n, int i, int m) {
	if (n == i) return 0;
	
	if (dp[i][m] != -1) return dp[i][m];
	
	long long best = go(n, i + 1, m);
	
	if (m >= qtd_pizza[i]) {
		best = max(best, go(n, i + 1, m - qtd_pizza[i]) + tempo[i]);
	}
	
	return dp[i][m] = best;
}

int main(){
	int num_pedidos, maxPizza;
	

	while(true){
		cin >> num_pedidos;
		if(num_pedidos == 0) break;
		
		cin >> maxPizza;
		
		for(int i = 0; i < num_pedidos; i++){
			
			cin >> tempo[i] >> qtd_pizza[i];
		}
		
		memset(dp, -1, sizeof(dp));
		long long best = go(num_pedidos, 0, maxPizza);
		cout << best << " min." << endl;
	}
	
	return 0;
}
