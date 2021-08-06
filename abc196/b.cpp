#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)

int main() {

    string x;
    cin >> x;

    string ans = x.substr(0, x.find('.'));
    cout << ans << endl;

    return 0;
}
