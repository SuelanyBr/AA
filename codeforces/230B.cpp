#include <iostream>
#include <math.h>
#define size 1000001
#define ll long long int
using namespace std;

int main(){
    bool isPrime[size];
	int n;
	int number;
    
	
	isPrime[0] = false;
    isPrime[1] = false;
    
    for(int i = 2; i < size; i++){
        isPrime[i] = true;
    }
    
    for(int i=2; i<size; i++){
        if(isPrime[i]==true){
            for(int j=2; i*j<size; j++){
                isPrime[i*j]=false;
            }
        }
    }
    

    cin >> n;
	ll array[n];
    for(int i=0; i<n; i++){
        cin >> array[i];
    }
    
    
    for(int i=0; i<n; i++){
        number = (int)sqrt(array[i]);
        if(number-sqrt(array[i]) == 0){
            if(isPrime[number]){
                cout << "YES" << endl;
			}else{
                cout <<   "NO" << endl;
			}
        }
        else{
			cout <<   "NO" << endl;
		}
    }
	
    return 0;
}