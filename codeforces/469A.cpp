#include <iostream>
#include <set>
using namespace std;

int main(){
	int n, p,q;
	int ind;
	cin >> n;
	
	set<int> x;
	
	cin >> p;
	for(int i = 0; i < p; i++){
		cin >> ind;
		x.insert(ind);
	}
	
	cin >> q;
	for(int j = 0; j < q; j++){
		cin >> ind;
		x.insert(ind);
	}

	string resp = (x.size() >= n) ? "I become the guy." : "Oh, my keyboard!";
	cout << resp << endl;
}
