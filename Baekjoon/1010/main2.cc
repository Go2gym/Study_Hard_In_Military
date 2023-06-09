#include<bits/stdc++.h>

using namespace std;

int dp[30][30];

int combination(int n, int r) {
    if(n == r || r == 0) return 1;
    int &ret = dp[n][r];
    if(ret != -1) return ret;
    
    ret = combination(n - 1, r - 1) + combination(n - 1, r);
    
    return ret;
}

int main() {
    memset(dp, -1, sizeof(dp));
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    
    while(t--) {        
        int n, m;
        cin >> n >> m;

        cout << combination(m, n) << "\n";
    }
}