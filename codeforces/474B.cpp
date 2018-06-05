#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main(){
	int N;
	cin >> N;
	vector<int> soma_list;
	
	
	int T1;
	int soma = 0;
	for(int i=0; i < N; i++){
		cin >> T1;
		soma += T1;
		soma_list.push_back(soma);
	}
	
	int M,T2,ans;
	cin >> M;
	for(int j=0; j < M; j++){
		cin >> T2;
		ans = lower_bound(soma_list.begin(), soma_list.end(), T2) - soma_list.begin();
		cout << ans+1 << endl;
	}

}