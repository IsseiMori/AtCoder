#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)
#define ll long long

int main() {

    int a, b;
    cin >> a >> b;

    if ( a <= b && b <= a * 6 ) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
