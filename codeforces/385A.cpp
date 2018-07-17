#include <iostream>
using namespace std;

int ar[110];

int main(){
	int dias, kg_framb;
	int result = 0;
	
	cin >> dias >> kg_framb;
	

	for(int i=0; i < dias; i++){
		cin >> ar[i];	
	}
		
	for(int j=1; j < dias; j++){
		int c = ar[j-1] - ar[j] - kg_framb;
		if(c > result) result = c;	
	}
	
	cout << result << endl;
	
}
