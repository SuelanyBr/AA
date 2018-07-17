#include <bits/stdc++.h>
#define ll long long int
#define MAX 100001
using namespace std;

int main(){
	int n, x;
	vector<ll> dp(MAX);
	vector<ll> count(MAX);

	cin >> n;
	while(n--) {
		cin >> x;
		count[x]++;
	}

	dp[0] = 0;
	dp[1] = count[1];

	for (int i = 2; i < MAX; i++) {
		dp[i] = max(dp[i - 1], dp[i - 2] + i*count[i]);
	}

	cout << dp[MAX - 1];
}