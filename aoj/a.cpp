#include <iostream>
#include <vector>

using namespace std;

int main() {

    int N, W; 
    cin >> N >> W;

    vector<int> values(N+1);
    vector<int> weights(N+1);

    for ( int i = 1; i <= N; i++ ) {
        cin >> values[i] >> weights[i];
    }

    vector<vector<int>> dp(N+1, vector<int>(W+1, 0));

    for ( int i = 1; i <= N; i++ ) {
        for ( int w = 1; w <= W; w++ ) {
            if ( w >= weights[i] ) dp[i][w] = max(dp[i-1][w-weights[i]] + values[i], dp[i-1][w]);
            else dp[i][w] = dp[i-1][w];
        }
    }

    cout << dp[N][W] << endl;

    return 0;
}