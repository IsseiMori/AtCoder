#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;

int main() {

    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;

    int ans = 0;

    if ( r1 == r2 && c1 == c2 ) ans = 0;
    else if ( r1 + c1 == r2 + c2 ) ans = 1;
    else if ( r1 - c1 == r2 - c2 ) ans = 1;
    else if ( abs(r1 - r2) + abs(c1 - c2) <= 3 ) ans = 1;
    else if ( abs(r1 - r2) + abs(c1 - c2) <= 6 ) ans = 2;
    else if ( abs(r1 - r2) % 2 == abs(c1 - c2) % 2 ) ans = 2;
    else if ( abs(abs(r1 - r2) - abs(c1 - c2)) <= 3 ) ans = 2;
    else ans = 3;

    cout << ans << endl;

    return 0;
}
