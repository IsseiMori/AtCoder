#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)

int main() {

    int N; cin >> N;

    vector<int> a(N, 0);
    rep(i, N) cin >> a[i];

    int ans = 0;
    for ( int left = 0; left < N; left++ ) {
        int min_val = 2147483647;
        for ( int right = left; right < N; right++ ) {
            min_val = min(min_val, a[right]);
            ans = max(ans, min_val*(right - left + 1));
        }
    }

    cout << ans << endl;

    return 0;
}