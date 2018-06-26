#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int A,B,C;
	
	cin >> A >> B >> C;
	
	int x;
	if(A < B){
		x = A;
		A = B;
		B = x;
	}
	if(A < C){
		x = A;
		A = C;
		C = x;
	}
	
	if(A >= B + C){
		cout << 'n' << endl;
	}
	else if(A*A < B*B + C*C){
		cout << 'a' << endl;
	}
	else if(A*A > B*B + C*C){
		cout << 'o' << endl;
	}
   else{
	    cout << 'r' << endl;
   }
}