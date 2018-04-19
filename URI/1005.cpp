#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	double A,B;
	
	cin >> A;
	cin >> B;
	
	double media = ( (A*3.5) + (B*7.5) )/11;
	
	printf("MEDIA = %.5f",media);
	
	cout << endl;

	return 0;
}
