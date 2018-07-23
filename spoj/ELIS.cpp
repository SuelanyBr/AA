#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main (){
	int lengthA, result;
	cin >> lengthA;
	int A[lengthA+1];
	vector<int> dp(lengthA+1);
	
	A[0] = -1;
	dp[0] = 0;
	
	for(int i = 1; i <= lengthA; i++){
		cin >> A[i];
	}
	
	for (int i = 1; i <= lengthA; i++){
		for (int j = 0; j < i; j++){
            if (A[j] < A[i])
				dp[i] = max(dp[j] + 1,dp[i]);
		}
	}
	
	result = *max_element(dp.begin(), dp.end());
	
	cout << result << endl;
	
	
	return 0;
}