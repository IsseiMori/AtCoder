#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)

int main() {

    long long n;
    int k;
    cin >> n >> k;

    rep(i, k) {
        if ( n % 200 == 0 ) n /= 200;
        else {
            n *= 1000;
            n += 200;
        }
    }

    cout << n << endl;

    return 0;
}
