#include <iostream>
#include <vector>
using  namespace std;

int main(){
	int m,n;
	long t; 
	cin >> m >> n;
	
    vector<long> lista(n);

    while(m--){
        long result = 0;
        for(int p = 0; p < n; p++){
            cin >> t;
			if(result < lista[p]){
				result = lista[p];
			}
			
            result += t;
			
            if(p > 0){
				if(lista[p - 1] >= lista[p]){
					lista[p] = lista[p - 1];
				}
			}
			
            lista[p] += t;
        }
        cout << result << endl;
    }
}