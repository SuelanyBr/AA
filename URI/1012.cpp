#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(){
	double A, B, C;
	
	cin >> A >> B >> C;
	
	double triangulo = (A*C)/2.0 ;
	double circulo = (3.14159) * pow(C,2);
	double trapezio = ( (A+B) * C )/2.0;
	double quadrado = pow(B,2) ;
	double retangulo = A*B;
	
	printf("TRIANGULO: %.3f", triangulo);
	cout << endl;
	printf("CIRCULO: %.3f", circulo);
	cout << endl;
	printf("TRAPEZIO: %.3f", trapezio);
	cout << endl;
	printf("QUADRADO: %.3f", quadrado);
	cout << endl;
	printf("RETANGULO: %.3f", retangulo);
	cout << endl;
	
	return 0;
}
