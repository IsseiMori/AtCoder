#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;

int main() {

    int n, m;
    cin >> n >> m;

    const int INF = 1001001001;
    vector<vector<int>> d(n, vector<int>(n, INF));

    rep(i, n) d[i][i] = 0;

    rep(i, m) {
        int a, b, c;
        cin >> a >> b >> c;
        a--; b--;
        d[a][b] = c;
    }

    ll ans = 0;
    rep(k, n) {
        rep(i, n) {
            rep(j, n) {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
                if ( d[i][j] != INF ) ans += d[i][j];
            }
        }
    }

    cout << ans << endl;

    return 0;
}
