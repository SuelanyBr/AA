#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s, resp;
	list<char> b;
	list<char>::iterator it;
	
	while(cin >> s){
		resp = "";
		b.clear();
		it = b.begin();

		for(int i = 0; i < s.size(); i++){
			if(s[i] == ']') {
				it = b.end();
			}else if(s[i] == '['){
				it = b.begin();
			}else{
				b.insert(it, s[i]);
			}

		}
		
		for(it = b.begin(); it != b.end(); it++){
			 resp += *it;
		}
		
		cout << resp << endl;
	}
	
	return 0;
}