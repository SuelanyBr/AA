#include <iostream>
#include <vector>
using  namespace std;

int main(){
	int m,n;
	int result = 0;
	int t; 
	cin >> m >> n;
	
    vector<int> lista(n);

    while(m--){
        
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