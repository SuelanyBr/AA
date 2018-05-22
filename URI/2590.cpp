#include <iostream>
#include <sstream>
#define ll long long int
using namespace std;

ll pow(int number, ll p, int t){
	if(p == 0){
		return 1;
	}else if(p%2 == 0){
		return pow(number%7, p/2,t);
	}else{
		return number*pow(number%7,p-1);
	}
}


int main(){
	
	int T;
	ll N;
	ll value;
	int num = 7;
	
	cin.tie(NULL);
	cout.sync_with_stdio(false);
	
	cin >> T;
	
	
	for(int i = 0; i < T; i++){
		cin.tie(NULL);
		cout.sync_with_stdio(false);
		cin >> N;
		value = pow(num,N,7);
		
		stringstream s;
		s << value;
		string sss = s.str();
		
		int tam = sss.size() - 1;
		cout << sss[tam] << endl;
	}
}