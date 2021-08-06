#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)
#define ll long long

int main() {

    int a, b;
    cin >> a >> b;

    a += b;

    if ( a >= 15 && b >= 8 ) cout << 1 << endl;
    else if ( a >= 10 && b >= 3 ) cout << 2 << endl;
    else if ( a >= 3 ) cout << 3 << endl;
    else cout << 4 << endl; 

    return 0;
}
