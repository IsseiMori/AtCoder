#include <iostream>
#include <vector> 
#include <iomanip>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;

int main() {

    ll a, b;
    cin >> a >> b;

    cout << fixed << setprecision(7); 
    cout << (a-b)/3.0 + b << endl;

    return 0;
}
