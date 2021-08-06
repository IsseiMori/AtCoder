#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    if ( a*a + b*b < c*c ) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
