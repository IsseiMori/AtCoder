#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)
#define ll long long

int main() {

    int n;
    ll k;
    cin >> n >> k;

    vector<int> ids(n);
    rep(i, n) cin >> ids[i];

    vector<int> ids2(ids);

    sort(ids.begin(), ids.end());

    ll base = k / n;
    ll remain = k % n;

    rep(i, n) {
        if ( ids2[i] < ids[remain] ) cout << base + 1 << endl;
        else cout << base << endl;
    }

    return 0;
}
