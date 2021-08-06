#include <iostream>
#include <vector>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;

int main() {

    int n, m;
    cin >> n >> m;

    vector<int> a(n, 0);
    vector<int> b(m, 0);

    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ia = 0, ib = 0;


    int mindiff = 2000000000;
    while ( ia < n && ib < m ) {
        mindiff = min(abs( a[ia] - b[ib]), mindiff);

        if ( ia == n ) ib++;
        else if ( ib == m ) ia++;
        else {
            if ( a[ia] < b[ib] ) ia++;
            else ib++;
        }
    }

    cout << mindiff << endl;

    return 0;
}
