#include <iostream>
using namespace std;

int main(){
	int n;
	int result = 0;
	
	cin >> n;
	
	int a[n] = {0};
	int sum[n+1] = {0};
    
	for(int i = 0; i < n; i++){
        cin >> a[i];
		sum[i+1] = sum[i] + a[i];
    }
	
	
	for(int i=1; i < n; i++){
		if(sum[i] == sum[n] - sum[i]) result++;
	}
	
	cout << result << endl;
	
	return 0;
}