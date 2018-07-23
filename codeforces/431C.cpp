#include <bits/stdc++.h>
using namespace std;
const long long int mod = 1e9+7;

int main(){
	ios::sync_with_stdio(0);
    cout << fixed << setprecision(12);
	long long int N, K, D, dp[2][128], ndp[2][128], ans;
	cin >> N >> K >> D;
    
    dp[0][0] = 1;
    for(long long int i = 0; i < N; i++){
        memset(ndp,0,sizeof(ndp));
		for(long long int j = 1; j < K+1; j++){
			for(long long int k = 0; k < N-j+1; k++){
                if(j < D) ndp[0][k+j] = (ndp[0][k+j] + dp[0][k])%mod;
				else ndp[1][k+j] = (ndp[1][k+j]+dp[0][k])%mod;
				ndp[1][k+j] = (ndp[1][k+j]+dp[1][k])%mod;
			}
        }
        swap(dp,ndp);
        ans = (ans+dp[1][N])%mod;
    }
    cout << ans << endl;
    return 0;
}