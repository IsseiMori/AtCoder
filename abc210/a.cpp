#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;

int main() {

    int n, a, x, y;
    cin >> n >> a >> x >> y;

    int ans = min(a, n) * x;
    if ( n > a ) ans += y * (n-a);

    cout << ans << endl;

    return 0;
}
