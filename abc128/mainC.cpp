#include <iostream>
#include <vector>

using namespace std;

int main() {

    int N, M;
    cin >> N >> M;

    vector<int> light_switches(M, 0);
    for ( auto& switches : light_switches ) {
        int k;
        cin >> k;
        for ( int i = 0; i < k; i++ ) {
            int s;
            cin >> s;
            switches |= (1<<(s-1));
        }
    }

    vector<int> patterns(M, 0);
    for ( auto& pattern : patterns ) {
        int p;
        cin >> p;
        pattern = p;
    }

    int total_ans = 0;
    for ( int i = 0; i < (1<<N); i++ ) {
        bool all_on = true;
        for ( int j = 0; j < M; j++ ) {
            int match = light_switches[j] & i;
            int num_ones = 0;
            while (match) {
                num_ones += match & 1;
                match >>= 1;
            }
            if ( num_ones%2 != patterns[j] ) all_on = false;
        }
        if ( all_on ) total_ans++;
    }

    cout << total_ans << endl;

    return 0;
}