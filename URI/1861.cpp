#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
	map<string,int> killer;
	map<string,int> dead;
	map<string, int> :: iterator it;
	
	string k,d;
	
	
	
	while(cin >> k >> d){
		killer[k]++;
		dead[d]++;
		if(k == " ")break;
	}
	
    cout << "HALL OF MURDERERS" << endl;
	for(it = killer.begin(); it != killer.end(); it++){
		string ass = it->first;
		if(dead.count(ass) == 0){
			cout << it->first << " " << it->second << endl;
		}
		
	}
	
	return 0;

}
