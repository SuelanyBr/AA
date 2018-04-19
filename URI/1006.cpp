#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	double A,B,C;
	
	cin >> A;
	cin >> B;
	cin >> C;
	
	double media = ( (A*2) + (B*3) + (C*5) )/10;
	
	printf("MEDIA = %.1f",media);
	
	cout << endl;

	return 0;
}
