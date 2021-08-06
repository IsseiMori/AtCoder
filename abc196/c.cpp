#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)

int main() {

    long long x;
    cin >> x;

    for ( int i = 1; ; i++ ) {
        if ( stoll(to_string(i) + to_string(i)) > x ) {
            cout << i - 1 << endl;
            return 0;
        }
    }

    return 0;
}
