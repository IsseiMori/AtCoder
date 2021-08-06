#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)

int main() {

    long long r, x, y;
    cin >> r >> x >> y;

    long long d2 = x*x+y*y;

    int steps = 1;
    while ( 1 ) {
        if ( r*r*steps*steps >= d2 ) break;
        steps++;
    }

    if ( steps == 1 ) {
        if ( r*r != d2 ) steps = 2;
    }
    cout << steps << endl;

    return 0;
}
