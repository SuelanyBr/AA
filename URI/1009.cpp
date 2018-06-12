#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	string nome;
	double salario;
	double montante;
	
	cin >> nome;
	cin >> salario;
	cin >> montante;
	
	double result = salario + ((montante*15)/100);
	
	printf("TOTAL = R$ %.2f", result);
	cout << endl;
	
	return 0;
}
