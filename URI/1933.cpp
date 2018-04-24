#include <iostream>
using namespace std;

int main(){
	int valores[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
	int C1,C2;
	int valor;
	cin >> C1 >> C2;
	
	if(C1 == C2 || C1 > C2){
		valor = C1;
	}else
		valor = C2;
	
	cout << valor << endl;
	
	return 0;
}