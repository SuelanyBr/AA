#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#define ll long long int
using namespace std;

int hex(char s){
	if(s == 'A'){
		return 10;
	}else if(s == 'B'){
		return 11;
	}else if(s == 'C'){
		return 12;
	}else if(s == 'D'){
		return 13;
	}else if(s == 'E'){
		return 14;
	}else {
		return 15;
	}
}

char hex2(int s){
	if(s == 10){
		return 'A';
	}else if(s == 11){
		return 'B';
	}else if(s == 12){
		return 'C';
	}else if(s == 13){
		return 'D';
	}else if(s == 14){
		return 'E';
	}else {
		return 'F';
	}
}


int main(){
	string numero;
	ll num_int;
	
	ll num_convertido;
	
	while(true){
		cin >> numero;
		istringstream ss(numero);
		ss >> num_int;
		
		if(num_int < 0){
			break;		
		}else if(numero[1] == 'x'){
			num_convertido = 0;
			ll valor;
			ll num;
			
			int tam = numero.size()-3;
			
			for(int i = 2; i < numero.size(); i++){
				char letra = toupper(numero[i]);
				if(letra == 'A' || letra == 'B' || letra == 'C' || letra == 'D' || letra == 'E' || letra == 'F' ){
					valor = hex(letra);
				}else{
					string s = "";
					s += numero[i];
					stringstream num(s);
					num >> valor;
				}
				num_convertido += valor*pow(16,tam);	
				tam--;
			}
			
			cout << num_convertido << endl;
			
		}else{
			string num_conv = "";
			ll valor = num_int;
			ll resto;
			
			if(valor == 0){
				cout << "0x0" << endl;
			}else{
				while(valor > 0){
					resto = valor%16;
					valor = valor/16;
					if(resto < 10){
						char hex = resto+'0';
						num_conv += hex;
					}
					else{
						num_conv += hex2(resto);
					}
				}
				cout << "0x";
			
			
				for(int j = num_conv.size()-1; j >= 0;j--){
					cout << num_conv[j];
				}
				cout << endl;
			}

		}
	}
	
}