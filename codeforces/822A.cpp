#include <iostream>
using namespace std;

long fatorial(long num){
	if(num <= 1){
		return 1;
	}else{
		long val = num*fatorial(num-1);
		return val;
	}
}

int main(){
	long number1, number2;
	cin >> number1 >> number2;
	
	if(number1 < number2){
		long fact1 = fatorial(number1);
		cout << fact1 << endl;
	}else{
		long fact2 = fatorial(number2);
		cout << fact2 << endl;
	}
	
	
	
}