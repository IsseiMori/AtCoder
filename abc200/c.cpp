#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)

int main() {

    int n; cin >> n;

    vector<long long> mod(200, 0);
    rep(i, n) {
        int n; cin >> n;
        mod[n%200]++;
    }

    long long ans = 0;
    rep(i, 200) {
        if ( mod[i] > 1 ) ans += (mod[i]*(mod[i]-1)/2);
    }

    cout << ans << endl;

    return 0;
}
