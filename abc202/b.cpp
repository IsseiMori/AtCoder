#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)

int main() {

    string str;
    cin >> str;

    string ans = "";
    rep(i, str.size()) {
        if ( str[i] == '0' ) ans = '0' + ans;
        if ( str[i] == '1' ) ans = '1' + ans;
        if ( str[i] == '6' ) ans = '9' + ans;
        if ( str[i] == '8' ) ans = '8' + ans;
        if ( str[i] == '9' ) ans = '6' + ans;
    }

    cout << ans << endl;

    return 0;
}
