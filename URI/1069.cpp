#include <iostream>
#include <stack>
using namespace std;

int main(){
	int qtde_entradas;
	
	cin >> qtde_entradas;
	
	string m;
	int result;
		
	for(int i=0; i < qtde_entradas; i++){
		cin >> m;
		result = 0;
		stack<char> pilha;
		for(int j=0; j < m.size(); j++){
			if(m[j] == '<'){
				pilha.push('<');
			}else if(m[j] == '>' && !pilha.empty()){
				pilha.pop();
				result++;
			}
		}
		cout << result << endl;
	}
}