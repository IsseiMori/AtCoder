#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)

int main() {

    int n; cin >> n;

    cout << max(n-1, 0) << endl;

    return 0;
}
