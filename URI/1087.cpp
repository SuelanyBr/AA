#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	
	int X1,Y1,X2,Y2;
	
	while(1){
		cin >> X1 >> Y1 >> X2 >> Y2;
		
		if(X1==0 && Y1==0 && X2==0 && Y2==0)
			break;
		
		if(X1 == X2 && Y1 == Y2){
			cout << 0 << endl;
		}else if(abs(X2-X1) == abs(Y2-Y1)){ //DIAGONAL
			cout << 1 << endl;
		}else if(X1 == X2 || Y1 == Y2){ // VERTICAL OU HORIZONTAL
			cout << 1 << endl;
		}else
			cout << 2 << endl;
	}
	
	
	
	return 0;
}


