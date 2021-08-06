#include <iostream>
#include <vector> 

using namespace std;


#define rep(i, n) for (int i = 0; i < n; ++i)
#define ll long long

int main() {

    int A, B;
    ll K;
    cin >> A >> B >> K;

    vector<vector<ll>> dp(61, vector<ll>(61, 0));

    dp[0][0] = 1;
    rep(i, 60) {
        rep(j, i+1) {
            dp[i+1][j] += dp[i][j];
            dp[i+1][j+1] += dp[i][j];
        }
    }

    string ans = "";
    while ( A+B > 0 ) {
        ll x = 0;

        if ( A >= 1 ) x = dp[A+B-1][A-1];

        if ( K <= x ) {
            ans += 'a';
            A--;
        }
        else {
            ans += 'b';
            B--;
            K -= x;
        }

    }

    cout << ans << endl;

    return 0;
}

// 1
// 2  2
// 3  5  5
// 4  9 14 14
// 5 14 28 42

// 6
// |- 3
//  |- 2
//  |- 1
// |- 3
//  |- 1
//  |- 2

//   b
// a 1 1 1
//   1 2 3
//   1 3 6