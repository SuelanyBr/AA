#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main (){
	
  int num_dias, custoPorDia, result;
  
  while (cin >> num_dias >> custoPorDia){
	int list[num_dias];
	vector<int> dp(num_dias);
	
	for(int i = 0; i < num_dias; i++){
		cin >> list[i];
		list[i] -= custoPorDia;
	}
	
	dp[0] = max(0,list[0]);
	
	
	for (int i = 1; i < num_dias; ++i){
		dp[i] = max(dp[i - 1] + list[i], list[i]);
	}
	
	result = *max_element(dp.begin(), dp.end());
	
	cout << result << endl;
	
  }
	return 0;
}