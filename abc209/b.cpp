#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;

int main() {

    int n, x;
    cin >> n >> x;

    int total = 0;
    for ( int i = 0; i < n; i++ ) {
        int a; 
        cin >> a;
        if ( i%2 == 1 ) total += a-1;
        else total += a;
    }

    if ( total <= x ) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
