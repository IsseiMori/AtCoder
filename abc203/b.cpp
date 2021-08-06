#include <iostream>

using namespace std;

int main() {

    int N, K;
    cin >> N >> K;

    int ans = 0;

    for ( int i = 1; i <= N; i++ ) ans += i*100*K;
    for ( int i = 1; i <= K; i++ ) ans += i*N;

    cout << ans << endl;

    return 0;
}