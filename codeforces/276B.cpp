#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	
	bool list[30] = {false};
	string PALAVRA;
	int ListCount = 0;
	
	cin >> PALAVRA;
	
	
    for (int i = 0; i < PALAVRA.length(); ++i){
        list[PALAVRA[i]-'a'] = !list[PALAVRA[i]-'a'];
    }
   
   
    ListCount = count(list, list + sizeof(list) / sizeof(list[0]), true);
	

	if (ListCount == 0 || (ListCount%2) == 1){
		cout << "First" << endl;
	}else{
		cout << "Second" << endl;
	}
	
	return 0;
}
	