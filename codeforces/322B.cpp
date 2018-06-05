#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int R,G,B;
	int contador = 0;
	cin >> R >> G >> B;
	
	
	contador += R/3;
	contador += G/3;
	contador += B/3;
	
	if(R >= 1 &&  G >= 1 && B >= 1){
		contador = max(contador, 1 + (R - 1)/3 + ( G - 1)/3 + (B - 1)/3);
	}
    if(R >= 2 && G >= 2 && B >= 2){
		contador = max(contador, 2 + (R - 2)/3 + ( G - 2)/3 + (B - 2)/3);
	}
	
	cout << contador << endl;
	

}