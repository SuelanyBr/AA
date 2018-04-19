#include <iostream>
using namespace std;

int main(){
	
	int H1,M1,H2,M2;
	int min;
	
	while(1){
		cin >> H1 >> M1 >> H2 >> M2;
		
		if(H1==0 && M1==0 && H2==0 && M2==0)
			break;
		
		
		if (H1 == H2){
			if (M1 > M2)
				min = (24*60) - (M1-M2);
			else if (M1 < M2)
				min = M2 - M1;
			else
				min = 0;
		
		}else{
			if (H1 > H2){
				min = (24 - H1 + H2) * 60;
			}else{
				min = (H2-H1) * 60;
			}
			
			
			if(M1 > M2){
				min = min - (M1-M2);
			}else if (M1 < M2){
				min = min + (M2-M1);
			}
		}
		cout << min << endl;
	}
	
	return 0;
}


