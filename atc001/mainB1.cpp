#include <iostream>
#include <vector>
#include <atcoder/dsu>

using namespace std;
using namespace atcoder;

int main() {

    int N, Q;
    cin >> N >> Q;

    dsu tree(N);


    while (Q--) {
        int p; cin >> p;

        int a, b;
        cin >> a >> b;

        if ( p == 0 ) {
            tree.merge(a, b);
        }
        else {
            if (tree.same(a, b) ) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }


    return 0;
}