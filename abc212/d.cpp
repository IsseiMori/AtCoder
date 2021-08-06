#include <iostream>
#include <vector> 
#include <queue>


using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;

void insert( vector<ll> &vec, ll val ) {
    auto iter = lower_bound(vec.begin(), vec.end(), val);
    vec.insert(iter, val);
}

int main() {

    int q; cin >> q;
    vector<ll> bag;
    ll incremented = 0;

    priority_queue< ll, vector<ll>, greater<ll> > pq;



    rep(i, q) {

        int x; cin >> x;

        if ( x == 1 ) {
            ll y; cin >> y;
            pq.push(y-incremented);
        }
        else if ( x == 2 ) {
            ll y; cin >> y;
            incremented += y;
        }
        else {
            // sort(bag.begin(), bag.end());
            cout << pq.top()+incremented << endl;
            pq.pop();
        }
    }

    return 0;
}