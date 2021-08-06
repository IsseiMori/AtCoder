#include <iostream>
#include <vector>
#include <set>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;

set<char> convertToSet(string v) {
    set<char> s;
    for ( char x : v ) s.insert(x);
    return s;
}

bool isNext(char a, char b) {
    if ( a + 1 == b ) return true;
    else if ( a == '9' && b == '0' ) return true;
    else return false;
}

int main() {

    string s;
    cin >> s;

    if ( convertToSet(s).size() == 1 ) cout << "Weak" << endl;
    else {
        bool all_consective = true;

        rep(i, 3) if ( !isNext(s[i], s[i+1]) ) all_consective = false;

        if ( all_consective ) cout << "Weak" << endl;
        else cout << "Strong" << endl;
    }

    return 0;
}
