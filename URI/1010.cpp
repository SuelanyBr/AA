#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int COD_1, COD_2;
	int QTD_1, QTD_2;
	double preco_1, preco_2;
	
	
	cin >> COD_1 >> QTD_1 >> preco_1;
	cin >> COD_2 >> QTD_2 >> preco_2;
		
	double result = (preco_1 * QTD_1) + (preco_2 * QTD_2);
	
	printf("VALOR A PAGAR: R$ %.2f", result);
	cout << endl;
	
	return 0;
}
