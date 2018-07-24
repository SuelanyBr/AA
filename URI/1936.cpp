#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int f[9];
	f[0] = 1;
	
	for(int i = 1; i < 9; i++){
		f[i] = i+f[i-1];
		cout << f[i] << endl;
	}
	
	
	//cout << << endl;
	
	return 0;
}
