#include <bits/stdc++.h>
using namespace std;

int main(){
	int A1, A2, A3;
	
	cin >> A1 >> A2 >> A3;
	
	int x = (A1*2) + (A3*2);
	int y = (A2*2) + (A3*4);
	int z = (A2*2) + (A1*4);
	
	int result1 = min(x,y);
	int result = min(result1, z);
	
	cout << result << endl;
	

}