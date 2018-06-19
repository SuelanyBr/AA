#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	char error;
	string num;
	
	while (true){
		cin >> error >> num;
		if(error == '0' && num == "0") break;
		
		string new_str= "";
		
		for(int i=0; i < num.size(); i++){
			if(num[i] != error){
				if(num[i] != '0'){
					new_str += num[i];
				}else{
					if(new_str.size() != 0){
						new_str += '0';
					}
				}
			}
			
		}
		
		if(new_str == ""){
			cout << "0" << endl;
		}else{
			cout << new_str << endl;
		}
		
		
		
	}
		
}
