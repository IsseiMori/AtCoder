#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)
#define ll long long

int main() {

    ll n; cin >> n;

    ll ans = 0;
    for ( ll i = 0; ; i++ ) {
        ll min = pow(1000, i);
        ll max = pow(1000, i+1)-1;
        if ( n > max ) {
            ans += (max - min + 1) * i;
        }
        else {
            ans += (n - min + 1) * i;
            cout << ans << endl;
            return 0;
        }

    }

    return 0;
}
