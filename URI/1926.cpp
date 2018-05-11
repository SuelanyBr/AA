#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	int n,number_first,number_last;
	long prime; //usar long numero alto
	int contador;
	int x,y;
	int total;
	cin >> n;
	
	
	for(int i=0; i < n; i++){
		cin >> number_first >> number_last;
		
		contador = 0;
		
		for(int j=number_first; j < number_last; j++){
			prime = 0;
			cout << endl;
			if(j != 1){
				cout << j << endl;
				for(int k = 2; k <= sqrt(j);k++){
					if(j%k == 0)prime++;
				}
				cout << prime << endl;
				cout << endl;
				if(prime < 1){
					x = (6*j) + 1;
					y = (6*j) - 1;
					
					total=(pow(x,2)) - (pow(y,2));
					if(total%24 == 0){
						contador++;
					}
				}
			}
		}
		cout << contador << endl;
		
		
	}	
	return 0;
}