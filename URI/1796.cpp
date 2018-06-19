#include <iostream>
using namespace std;

int main(){
	int Q, NUM;
	int sat = 0;
	int n_sat = 0; 
	cin >> Q;
	
	for(int i=0; i < Q; i++){
		cin >> NUM;
		if( NUM == 0 ){
			sat++;
		}else{
			n_sat++;
		}
	}
	
	if(	sat > n_sat){
		cout << "Y" << endl;
	}else{
		cout << "N" << endl;
	}

}
