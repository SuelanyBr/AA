#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

int main(){
	string str;
	int size;
	
	while(getline(cin,str)){
		stack<char> pilha;
		size = str.length();
		
		for(int i = 0; i < size; i++){
			if(str[i] == '('){
				pilha.push(i);
			}
			if(str[i] == ')'){
				if(!pilha.empty()){
					pilha.pop();
				}else{
					pilha.push(i);
				}
			}
		}
	
		if(pilha.empty()){
			cout << "correct" << endl;
		}else{
			cout << "incorrect" << endl;
		}
	}
	return 0;
}