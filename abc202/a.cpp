#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)

int main() {

    int ans = 0;

    rep(i, 3) {
        int tmp;
        cin >> tmp;
        ans += 7-tmp;
    }

    cout << ans << endl;

    return 0;
}
