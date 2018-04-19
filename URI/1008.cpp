#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int id_func;
	int horas;
	double valorHora;
	
	cin >> id_func;
	cin >> horas;
	cin >> valorHora;
	
	double salario = horas*valorHora;
	
	cout << "NUMBER = " << id_func << endl;
	printf("SALARY = U$ %.2f", salario);
	cout << endl;
	
	return 0;
}
