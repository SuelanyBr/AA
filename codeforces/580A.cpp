#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
	int N, num, num_1, contador(1), maxValue(1);
	
	cin >> N;
	
	cin >> num_1;
	for(int i = 1; i < N; i++){
		cin >> num;
		
		if(num >= num_1){
			contador++;
			maxValue = max(contador, maxValue);
		}else{
			contador = 1;
		}
		
		num_1 = num;
	}
	
	cout << maxValue << endl;
	
	return 0;
}
