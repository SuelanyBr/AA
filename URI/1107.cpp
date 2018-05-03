#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int A,C;
	int result;
	
	while (true){
		cin >> A >> C;
		
		if (A == 0 && C == 0){
			break;
		}
		
		int array[C] = {0};
		
		for(int i = 0; i < C; i++){
			cin >> array[i];
		}

		result = 0;
	
		for(int j = 0; j < C; j++){
			if (j == 0){
				result += A-array[j];
			}else{
				if(array[j-1] > array[j]){
					result += (array[j-1] - array[j]);
				}
			}
		}

		cout << result << endl;
		
		
	}
	return 0;
}