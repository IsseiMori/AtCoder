#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;

int main() {

    int n; cin >> n;
    string s; cin >> s;

    int turn = 1;
    while( s[turn-1] == '0' ) turn++;

    if ( turn % 2 == 0 ) cout << "Aoki" << endl;
    else cout << "Takahashi" << endl;

    return 0;
}
