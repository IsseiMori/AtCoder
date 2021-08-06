#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)
#define ll long long

int main() {

    int n;
    cin >> n;

    int a[1010], b[1010];
    rep(i, n) cin >> a[i] >> b[i];

    int ans = 200000;
    rep(i, n) rep(j, n) {
        int count;
        if ( i == j ) count = a[i] + b[j];
        else count = max(a[i], b[j]);
        if ( count < ans ) ans = count;
    }

    cout << ans << endl;

    return 0;
}
