#include <iostream>
#include <sstream>
#include <math.h>
#define ll long long
using namespace std;

int main(){
	double d = 10;
	ll num;
	ll value;
	ll contador = 0;
	cin >> num;
	
	if(num < 9){
		cout << num << endl;
	}else{
		stringstream s;
		s << num;
		string sss = s.str();
		
		
		int tam = sss.size();
		ll i = num; 
		
	
		
		while(true){
			if(i < 0) break;
			
			value = i - pow(d,tam-1);
			i = i - value-1;
			
			contador += (value+1)*tam;
			
			tam = tam-1;
		}
		cout << contador << endl;
		
	}

	
}