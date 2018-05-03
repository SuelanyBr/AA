#include <iostream>
using namespace std;


int main(){
	
	int N;
	
	while(1){
		cin >> N;
		
		if(N == 0){
			break;
		}
		int t;
		for (int i = 0; i < N; i++){
			cin >> t;
			if(t == i+1){
				cout << "Teste " << i+1 << endl;
				cout << t << endl;
				cout << endl;
				break;
			 }	
			
		}
		
	}
	return 0;
}
