#include <iostream>
using namespace std;

int main(){
	//Read 2 integer values
	int A;
	int B;
	
	cin >> A;
	cin >> B;
	
	//are multiples??
	int mod = 0;
	
	if(A < B)
		mod = B%A;
	else
		mod = A%B;
	
	// PRINT
	if (mod == 0)
		cout << "Sao Multiplos" << endl;
	else
		cout << "Nao sao Multiplos" << endl;
	return 0;
}
