#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)
#define ll long long

int main() {

    int p;
    cin >> p;

    int coins[10] = {1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};

    int ans = 0;

    for ( int i = 9; i >= 0; i-- ) {
        while ( p >= coins[i] ) {
            p -= coins[i];
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
