#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
	map<string,int> killer;
	map<string,int> dead;
	
	string k,d;
	
	
	
	while(cin >> k >> d){
		killer[k]++;
		dead[d]++;
	}
	
	//Iterator
        
	
	cout << "HALL OF MURDERERS" << endl;
	
	return 0;

}
