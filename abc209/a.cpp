#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;

int main() {

    int a, b;
    cin >> a >> b;

    cout << max(b-a+1, 0) << endl;

    return 0;
}
