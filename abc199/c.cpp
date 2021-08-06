#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)

int main() {

    int n, q;
    string s;
    cin >> n >> s >> q;

    bool flipped = false;

    rep(i, q) {
        int t, a, b;
        cin >> t >> a >> b;

        if ( t == 1 ) {
            a--;
            b--;
            if ( flipped ) {
                a = (a + n) % (2*n);
                b = (b + n) % (2*n);
            }
            int tmp = s[a];
            s[a] = s[b];
            s[b] = tmp;
        }
        if ( t == 2 ) flipped = !flipped;
    }

    if ( flipped ) s = s.substr(n, s.length()) + s.substr(0, n);

    cout << s << endl;

    return 0;
}
