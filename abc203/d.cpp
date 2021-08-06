#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)

bool isOK(vector<vector<int>>& grid, int K, int mid, int L) {
    int N = grid.size();
    vector<vector<int>> imos(N+1, vector<int>(N+1, 0));
    rep(i, N) rep(j, N) imos[i+1][j+1] = grid[i][j] > mid? 1:0;
    rep(i, N) rep(j, N) imos[i+1][j+1] += imos[i+1][j];
    rep(i, N) rep(j, N) imos[i+1][j+1] += imos[i][j+1];
    rep(i, N-K+1) rep(j, N-K+1) {
        int now = imos[i+K][j+K];
        now -= imos[i+K][j];
        now -= imos[i][j+K];
        now += imos[i][j];
        if ( now < L ) return true;
    }
    return false;
}

int main() {

    int N, K;
    cin >> N >> K;

    int L = K*K/2+1;

    vector<vector<int>> grid(N, vector<int>(N, 0));
    rep(i, N) rep(j, N) cin >> grid[i][j];

    int left = -1, right = 1001001001;
    while ( left+1 < right ) {
        int mid = (right + left) / 2;
        
        if (isOK(grid, K, mid, L)) right = mid;
        else left = mid;
    }

    cout << right << endl; 

    return 0;
}
