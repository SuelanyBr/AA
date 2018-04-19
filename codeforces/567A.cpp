#include <iostream>
using namespace std;
#define MAX 100000

int main(){
	
	int n;
	int arr[MAX];
	int mn,mx,max1;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	
	max1 = arr[n-1]-arr[0];
	
	cout << arr[1]-arr[0] << " " << max1 << endl;
	
	for(int i=1; i < n-1; i++){
		mn = min(arr[i]-arr[i-1],arr[i+1]-arr[i]);
		mx = max(arr[i]-arr[0],arr[n-1]-arr[i]);
		
		cout << mn << " " << mx << endl;
	}
	
	cout << arr[n-1]-arr[n-2] << " " << max1 << endl;
	

	return 0;
}