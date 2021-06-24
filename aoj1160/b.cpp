#include <iostream>
#include <vector>

using namespace std;

int dx[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dy[] = {1, 1, 1, 0, 0, -1, -1, -1};

int fill(vector<vector<bool>>& map, int y, int x) {
    if ( map[y][x] == false ) return 0;

    map[y][x] = false;

    for ( int i = 0; i < 8; i++ ) {
        fill(map, y+dy[i], x+dx[i]);
    }

    return 1;
}

int main() {

    while (1) {

        int w, h;
        cin >> w >> h;

        if ( w == 0 && h == 0 ) break;

        vector<vector<bool> > map(h+2, vector<bool>(w+2, false));

        for ( int i = 1; i < h+1; i++ ) {
            for ( int j = 1; j < w+1; j++ ) {
                int tmp;
                cin >> tmp;
                if ( tmp == 1 ) map[i][j] = true;
            }
        }

        int count = 0;

        for ( int i = 1; i < h+1; i++ ) {
            for ( int j = 1; j < w+1; j++ ) {
                count += fill(map, i, j);
            }
        }

        cout << count << endl;

    }


    return 0;
}