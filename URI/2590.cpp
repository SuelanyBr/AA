#include <iostream>
#include <sstream>
#define MOD 1000000007
#define ll long long int
using namespace std;


ll fast_power(ll base, ll power){
    ll result = 1;
    while (power > 0){
        if (power % 2 == 1){
            result = (result * base) % MOD;
		}
        power = power / 2;
        base = (base * base) % MOD;
	}
    return result;
}
int main(){
	
	int T;
	ll N;
	ll value;
	int num = 7;
	
	cin >> T;
	
	
	for(int i = 0; i < T; i++){
		cin >> N;
		value = fast_power(7, N);
		
		stringstream s;
		s << value;
		string sss = s.str();
		
		int tam = sss.size() - 1;
		cout << sss[tam] << endl;
	}
}