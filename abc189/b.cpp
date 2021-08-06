#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)

int main() {

    long long N, X;
    cin >> N >> X;

    X *= 100;

    long long alchol = 0;
    int drunk_at = -1;
    rep(i, N) {
        int v, p;
        cin >> v >> p;
        alchol += v*p;
        if ( drunk_at == -1 && alchol > X ) drunk_at = i+1;
    }

    cout << drunk_at << endl;

    return 0;
}
