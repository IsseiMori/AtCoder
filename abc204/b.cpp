#include <iostream>

using namespace std;

int main() {

    int N;
    cin >> N;

    int ans = 0;

    for ( int i = 0; i < N; i++ ) {
        int a; 
        cin >> a;

        ans += max(a - 10, 0);
    }

    cout << ans << endl;

    return 0;
}