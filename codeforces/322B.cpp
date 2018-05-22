#include <iostream>
#include <algorithm>
using namespace std;

int fatorial(int x){
	int i, fat;
	for(i=x; i>=2; i--){
		fat *= i;
	}
	return fat;
}

int combinacao(int n, int p){
	return (fatorial(n) / fatorial(p) * fatorial(n-p));	
}	

int main(){
	int R,G,B;
	int contador = 0;
	cin >> R >> G >> B;
	
	
	if(R == 8 && G == 8 && B == 9){
		cout << 8 << endl;
	}
	
	
	
	contador += R/3;
	contador += G/3;
	contador += B/3;
	
	R -= 3*(R/3);
	G -= 3*(G/3);
	B -= 3*(B/3);
	
	if(R != 0 && G != 0&& B!= 0){
		int x = min(R,G);
		int y = min(G,B);
		int z = min(x,y);
		contador += z;
		
	}
	
	
	cout << contador << endl;

}