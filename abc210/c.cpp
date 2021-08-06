#include <iostream>
#include <vector> 
#include <unordered_map>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;

int main() {

    int n, k;
    cin >> n >> k;

    vector<int> c(n);
    rep(i, n) cin >> c[i];

    unordered_map<int, int> unique;

    int ucount = 0;
    rep(i, k) {
        if ( unique.find(c[i]) == unique.end() ) ucount++;
        unique[c[i]]++;
    }

    int max_ucount = ucount;

    for ( int i = k; i < n; i++ ) {

        if ( unique[c[i-k]] == 1 ) ucount--;
        unique[c[i-k]]--; 

        if ( unique.find(c[i]) == unique.end() || unique[c[i]] == 0 ) {
            ucount++;
        }
        unique[c[i]]++;

        max_ucount = max(max_ucount, ucount);
    }

    cout << max_ucount << endl;

    return 0;
}

