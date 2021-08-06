#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;

int main() {

    int n; cin >> n;

    vector<int> c(n);
    rep(i, n) cin >> c[i];

    sort(c.begin(), c.end());

    int x = 0;
    ll ans = 1;
    for ( int i = 0; i < n; i++ ) {
        ans = (ans * (c[i] - x)) % 1000000007;
        x++;
    }

    cout << ans << endl;

    return 0;
}