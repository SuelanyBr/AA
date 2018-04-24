#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string PALAVRA;
	cin >> PALAVRA;
	
	string NOVAPALAVRA = "";
	bool result = true;
	
	for(int j = PALAVRA.size()-1; j >= 0; j--){
		NOVAPALAVRA += PALAVRA[j];
	}
	
	
	for(int i = 0; i < PALAVRA.size(); i++){
		cout << PALAVRA[i] << endl;
		cout << NOVAPALAVRA[i] << endl;
		if (PALAVRA[i] != NOVAPALAVRA[i]){
			result = false;
		}
	}
	
	if(result){
		cout << "First" << endl;
	}else {
		cout << "Second" << endl;
	}


}