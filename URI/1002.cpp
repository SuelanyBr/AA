#include <math.h>
#include <stdio.h>
#include <iostream>
using namespace std;

#define N 3.14159

int main(){
	double raio;
	cin >> raio;
	
	double area = N * pow(raio,2);
	
	printf("A=%.4f",area);
	
	cout << endl;
	
	return 0;
}
