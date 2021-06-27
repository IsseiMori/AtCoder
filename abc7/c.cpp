#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

int bfs(vector<vector<bool>> grid, pair<int, int> start, pair<int, int> goal) {

    // 最短距離を保存する
    vector<vector<int>> dist(grid.size(), vector<int>(grid[0].size(), -1));

    // 最短距離が見つかった、または道でない
    vector<vector<bool>> visisted(grid.size(), vector<bool>(grid[0].size(), false));
    for ( int i = 0; i < grid.size(); i++ ) {
        for ( int j = 0; j < grid[0].size(); j++ ) {
            if ( !grid[i][j] ) visisted[i][j] = true;
        }  
    }

    // 最短距離が確定したらこのキューに入れられる
    // 一個づつ取り出し、そこから辿り着ける最短距離を記録していく
    queue<pair<int, int> > q;

    int dx[] = {-1, 0, 0, 1};
    int dy[] = {0, 1, -1, 0};

    // 初期位置
    q.push(start);
    dist[start.first][start.second] = 0;
    visisted[start.first][start.second] = true;

    while ( !q.empty() ) {
        pair<int, int> cell = q.front(); q.pop();

        for ( int i = 0; i < 4; i++ ) {

            int next_x = cell.first + dx[i];
            int next_y = cell.second + dy[i];

            if ( visisted[next_x][next_y] ) continue;

            // 現在のcellは最短距離が確定してるのでここからたどり着けるcellの最短距離は+1となる
            dist[next_x][next_y] = dist[cell.first][cell.second] + 1;

            // ゴールなら終わり
            if ( make_pair(next_x, next_y) == goal ) {
                return dist[next_x][next_y];
            }


            visisted[next_x][next_y] = true;
            q.push(make_pair(next_x, next_y));
        }
        
    }

    return -1;
}

int main() {

    int R, C;
    cin >> R >> C;

    vector<vector<bool>> map(R, vector<bool>(C, false));

    int sx, sy, gx, gy;
    cin >> sx >> sy;
    cin >> gx >> gy;

    for ( int row=0; row < R; row++ ) {
        string tmp;
        cin >> tmp;
        
        int col = 0;
        for ( char c : tmp ) {
            if ( c == '.' ) map[row][col] = true;
            col++;
        }
    }

    cout << bfs(map, make_pair(sx-1, sy-1), make_pair(gx-1, gy-1)) << endl;

    return 0;
}