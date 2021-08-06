#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;

int main() {

    int n, x;
    cin >> n >> x;

    string s;
    cin >> s;

    rep(i, n) {
        if ( s[i] == 'o' ) x++;
        else if ( x > 0 ) x--;
    }

    cout << x << endl;

    return 0;
}
