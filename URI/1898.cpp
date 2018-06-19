#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include <string>
using namespace std;

int main(){
	string str1;
	string str2;
	string cpf = "";
	string valor1= "";
	string valor2= "";
	double result;
	bool ponto = false;
	int qtd = 0; //11
	int casa_decimal = 0; //2
	
	
	
	cin >> str1;
	cin >> str2;
	
	for(int i = 0; i < str1.size(); i++){
		
		if(str1[i] == '.' && valor1.size() != 0){
			valor1+='.';
			ponto = true;
		}
		
		if (isdigit(str1[i])){
			if(qtd < 11){
				cpf += str1[i];
			}else{
				if(ponto){
					if(casa_decimal < 2){
						valor1 += str1[i];
						casa_decimal++;
					} 
				}
				else{
					valor1 += str1[i];
				}
			}
		}
	}
	
	ponto = false;
	casa_decimal = 0;
	
	for(int i = 0; i < str2.size(); i++){	
		if(str2[i] == '.' && valor2.size() != 0){
			valor1+='.';
			ponto = true;
		}
		
		if (isdigit(str2[i])){
			if(ponto){
				if(casa_decimal < 2){
					valor2 += str2[i];
					casa_decimal++;
				}else{
					valor2 += str2[i];
				}
			}
		}
	}
	
	size_t sz = 0;
	result = atof(valor1) + atof(valor2);
	cout << "cpf " << cpf << endl;
	printf ("%.2f\n",result);
	
	
	
	
	return 0;
}
