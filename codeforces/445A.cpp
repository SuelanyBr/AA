#include <iostream>
using namespace std;

int main(){
	int N, M;
	string str;
	
	cin >> N >> M;
	
	for(int i=0; i < N; i++){
		cin >> str;
		for(int j=0; j < M; j++){
			if(str[j] == '.'){
				if((j+i)%2 == 0){
					str[j] = 'B';
				}else{
					str[j] = 'W';
				}
			}
		}
		cout << str << endl;
		
	}

}
