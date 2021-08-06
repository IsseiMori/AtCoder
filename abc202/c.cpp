#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)

int main() {

    int N; cin >> N;

    vector<int> a(N, 0);
    vector<int> b_tmp(N, 0);
    vector<int> b(N, 0);

    rep(i, N) cin >> a[i];
    rep(i, N) cin >> b_tmp[i];
    rep(i, N) {
        int tmp; cin >> tmp;
        b[i] = b_tmp[tmp-1];
    }

    unordered_map<int, int> a_map;
    unordered_map<int, int> b_map;

    rep(i, N) a_map[a[i]] += 1;
    rep(i, N) b_map[b[i]] += 1;

    long long ans = 0;

    for ( auto& iter : a_map ) {
        ans += iter.second * b_map[iter.first];
    }

    cout << ans << endl;


    return 0;
}
