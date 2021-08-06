#include <iostream>
#include <vector> 
#include <unordered_map>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)
#define ll long long

int main() {

    int n;
    cin >> n;

    unordered_map<int, int> m;

    ll ans = 0;
    rep(i, n) {
        int a;
        cin >> a;

        for ( auto item : m ) {
            ans += pow((a - item.first), 2) * item.second;
        }

        m[a]++;
    }

    cout << ans << endl;

    return 0;
}
