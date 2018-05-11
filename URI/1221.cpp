#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	int n,number;
	cin >> n;
	long prime; //usar long
	
	for(int i=0; i < n; i++){
		cin >> number;
		prime = 0;
		
		if(number == 1){
			cout << "Not Prime" << endl;
		}else{
			for(int j=2; j <= sqrt(number); j++){
				if(number%j == 0){
					prime++;
				}
			}
		}
		
		if(prime >= 1){
			cout << "Not Prime" << endl;
		}else{
			cout << "Prime" << endl;
		}
	}
	
	
	return 0;
}