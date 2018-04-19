#include <iostream>
#include <string>
using namespace std;

int main(){
	string S,T;
	int yay = 0;
	int whoops = 0; 
	int arrayS[500] = {0}, arrayT[500] = {0};
		
	cin >> S >> T;
	int size_T = T.size();
	int size_S = S.size();
	
	int aux;
	
	//qtde de repeticoes
	for (int i = 0; i < size_S; i++)
		arrayS[S[i]]++;
		
	for (int i = 0; i < size_T; i++)
		arrayT[T[i]]++;
		
	
	//iguais
	for (int i = 0; i < 500; i++){
		aux = min(arrayS[i], arrayT[i]);
		yay += aux;
		arrayS[i] -= aux;
		arrayT[i] -= aux;
	}
	

	//Maiuscula e minusculas
	// "A = 95" "z=122"
	for (int i = 65; i < 122; i++){
		aux = min(arrayS[i] + arrayS[i + 32], arrayT[i] + arrayT[i + 32]);
		whoops += aux;
	}
	
	cout << yay << " " << whoops << endl;
	
	return 0;
}
