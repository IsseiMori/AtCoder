#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;

int main() {

    int a, b;
    cin >> a >> b;

    if ( a > 0 && b == 0 ) cout << "Gold" << endl;
    else if ( a == 0 && b > 0 ) cout << "Silver" << endl;
    else cout << "Alloy" << endl;

    return 0;
}
