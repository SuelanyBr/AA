#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

int main(){
	ll n, num;
	cin >> n;
	vector<ll> list(n);
	
	ll result = 1;
	
	for(ll i = 0; i < n; i++){
		cin >> list[i];			
	}
	
	sort(list.begin(), list.end());
	
	for(ll i = 0; i < n; i++){
		if(list[i] >= result) result++;	
	}
	
	cout << result << endl;
	
	
}
