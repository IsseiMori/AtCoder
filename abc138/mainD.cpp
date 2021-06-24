#include <iostream>
#include <vector>

using namespace std;
using Graph = vector<vector<int>>;

vector<bool> seen;
vector<int> G_vals;
void dfs(const Graph &G, int cu, int pa = -1) {
    for ( auto next_v : G[cu] ) {
        if ( next_v != pa ) {
             G_vals[next_v] += G_vals[cu];
            dfs(G, next_v, cu);
        }
    }
}

int main() {
    
    int N, Q;
    cin >> N >> Q;

    Graph G(N);

    for ( int i = 1; i < N; i++ ) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    G_vals.assign(N, 0);

    for ( int i = 0; i < Q; i++ ) {
        int p, x;
        cin >> p >> x;
        p--;
        G_vals[p] += x;
    }

    seen.assign(N, false);
    dfs(G, 0);

    for ( auto n : G_vals ) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}