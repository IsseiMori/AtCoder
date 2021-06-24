#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {

    int N; cin >> N;

    long double total_dist = 0;

    vector<pair<int, int>> towns;

    for ( int i = 0; i < N; i++ ) {
        int x, y;
        cin >> x >> y;
        towns.push_back(make_pair(x, y));
    }

    int num_perm = 0;

    sort(towns.begin(), towns.end());

    do {
        int x_prev = towns[0].first;
        int y_prev = towns[0].second;

        for ( int i = 1; i < N; i++ ) {
            int x = towns[i].first;
            int y = towns[i].second;

            long double dx = x - x_prev;
            long double dy = y - y_prev;

            total_dist += sqrt(dx * dx + dy * dy);

            x_prev = x;
            y_prev = y;
        }

        num_perm++;

    } while ( next_permutation(towns.begin(), towns.end()) );

    cout << setprecision(10) << total_dist / num_perm << endl;

    
    return 0;
}