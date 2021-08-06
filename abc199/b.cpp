#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)

int main() {

    int n; cin >> n;
    int a_max = 0;
    int b_min;

    rep(i, n) {
        int x; cin >> x;
        a_max = max(a_max, x);
    }

    cin >> b_min;
    rep(i, n-1) {
        int x; cin >> x;
        b_min = min(b_min, x);
    }

    cout << max(b_min-a_max+1, 0) << endl;

    return 0;
}
