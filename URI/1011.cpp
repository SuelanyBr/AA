#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(){
	int raio;
	
	cin >> raio;
		
	double result = ( (4/3.0) * (3.14159) * (pow(raio,3)) );
	
	printf("VOLUME = %.3f", result);
	cout << endl;
	
	return 0;
}
