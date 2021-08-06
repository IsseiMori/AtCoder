#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)

int main() {

    int h, w, x, y;
    cin >> h >> w >> x >> y;

    // true for non-blocking
    vector<vector<bool>> map(h+2, vector<bool>(w+2, false));

    rep(i, h) {
        string s;
        cin >> s;
        rep(j, s.length()) {
            if ( s[j] == '.' ) map[i+1][j+1] = true;
        }
    }

    int ans = 1;
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    rep(i, 4) {
        int steps = 1;
        while( map[x+dx[i]*steps][y+dy[i]*steps] ) {
            ans++;
            steps++;
        }
    }

    cout << ans << endl;

    return 0;
}
