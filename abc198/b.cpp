#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)

int main() {

    int n; cin >> n;

    while ( n > 0 && n % 10 == 0 ) n /= 10;

    vector<int> v;
    while ( n > 0 ) {
        v.push_back(n%10);
        n /= 10;
    }

    bool is_palindrome = true;
    for ( int i = 0; i < v.size() / 2; i++ ) {
        if ( v[i] != v[v.size()-1-i] ) {
            is_palindrome = false;
            break;
        }
    }

    if ( is_palindrome ) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
