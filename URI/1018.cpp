#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	
	// LER VALOR
	int value;
	cin >> value;
	
	
	// NOTAS
	int notas[7] = {100,50,20,10,5,2,1};
	
	// PRINT VALOR LIDO
	cout << value << endl;
	
	// CALCULAR
	int qtd_notas;
	for(int i = 0; i < 7; i++){
		qtd_notas = value/notas[i];
		value = value - qtd_notas*notas[i];
		
		printf("%d nota(s) de R$ %d,00\n",qtd_notas, notas[i]);

	}
	
	return 0;
}
