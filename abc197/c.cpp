#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)

int main() {

    int n; cin >> n;

    vector<int> a(n);
    rep(i, n) cin >> a[i];

    int ans = 2000000000;

    for ( int i = 0; i < 1 << (n-1); i++ ) {
        int xored = 0;
        int ored = 0;
        for ( int j = 0; j <= n; j++ ) {
            if ( j < n ) ored |= a[j];
            if ( j == n || (i >> j) & 1 ) xored ^= ored, ored = 0;
        }
        ans = min(ans, xored);
    }

    cout << ans << endl;


    return 0;
}
