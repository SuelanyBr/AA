#include <iostream>
using namespace std;

int main(){
	int X,Y;
	cin >> X >> Y;
	int minimo;
	minimo = min(X, Y);
	if (minimo % 2 == 0)
		cout << "Malvika" << endl;
	else
		cout << "Akshat" << endl;
	return 0;
}