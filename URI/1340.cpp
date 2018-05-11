#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main(){
	
	stack<int> pilha;
	queue<int> fila;
	priority_queue<int> fila_prioridade;
	
	bool pilha_b;
	bool fila_b;
	bool fila_prioridade_b;
	
	int quant;
	int tipo, valor;
		
	while (cin >> quant){
		
		pilha_b = true;
		fila_b = true;
		fila_prioridade_b = true;
		
		
		for(int i=0; i < quant;i++){
			cin >> tipo >> valor;
			
			
			if(tipo == 1){
				fila.push(valor);
				pilha.push(valor);
				fila_prioridade.push(valor);
			}else{
				
				if(pilha.top() != valor){
					pilha_b = false;
				}else{
					pilha.pop();
				}
				if(fila.front() != valor){
					fila_b = false;
                }else{
					fila.pop();
				}
                if(fila_prioridade.top() != valor){
					fila_prioridade_b = false;
                }else{
					fila_prioridade.pop();
				}
				
			}
		}
		
		if(pilha_b && !fila_b && !fila_prioridade_b) cout << "stack" << endl;
		else if(fila_b && !pilha_b && !fila_prioridade_b) cout << "queue" << endl;
		else if(fila_prioridade_b && !pilha_b && !fila_b) cout << "priority queue" << endl;
		else if(!pilha_b && !fila_b && !fila_prioridade_b)cout << "impossible" << endl;
		else cout << "not sure" << endl;
		
		while(!pilha.empty()) pilha.pop();
		while(!fila.empty()) fila.pop();
		while(!fila_prioridade.empty()) fila_prioridade.pop();
	}
}