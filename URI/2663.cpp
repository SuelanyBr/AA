#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, K;
	cin >> N >> K;
	int maior = 0;
	int quant = 0;
	vector<int> pont(N);

	for (int i = 0; i < N; i++){
		cin >> pont[i];
	}
	
	sort(pont.begin(), pont.end());
	
	for (int i = N-1; i >= 0; i--){
		if(pont[i] >= maior){
			maior = pont[i];
			quant++;
		}
		if(quant > K & pont[i-1] != pont[i]) break;
		if(quant < K & pont[i-1] != pont[i]) maior = pont[i-1];
	}
	
	cout << quant << endl;
	
}