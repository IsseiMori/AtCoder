#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<int>>& G, vector<bool>& visited, int s) {
    if ( visited[s] ) return;
    visited[s] = true;
    for ( auto vv:G[s] ) dfs(G, visited, vv);
}

int main() {

    int N, M;
    cin >> N >> M;

    vector<vector<int>> G(N, vector<int>());
    vector<bool> visited(N, false);

    for ( int i = 0; i < M; i++ ) {
        int a, b;
        cin >> a >> b;

        G[a-1].push_back(b-1);
    }


    int ans = 0;
    for ( int i = 0; i < N; i++ ) {
        for ( int j = 0; j < N; j++ ) visited[j] = false;
        dfs(G, visited, i);
        for ( int j = 0; j < N; j++ ) ans += visited[j];
    }
    
    cout << ans << endl;

    return 0;
}