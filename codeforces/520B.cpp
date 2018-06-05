#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	
	int k = 0;
	
	if(m < n){
		cout << n-m << endl;
	}else{
		while(n < m){
			if(m%2 == 0){			
				m/=2;
			}
			else{
				m++;
			}
			k++ ;
		}
		cout << abs(k + n - m) << endl;
	}

	return 0;
}