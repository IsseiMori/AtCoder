#include <iostream>
#include <map>

using namespace std;

int main() {

    int N; cin >> N;
    long long K; cin >> K;

    map<long long, long long> donations;
    for ( int i = 0; i < N; i++ ) {
        long long a, b;
        cin >> a >> b;
        donations[a] += b;
    }

    long long current_pos = 0;

    for ( auto iter = donations.begin(); iter != donations.end(); iter++ ) {
        
        long long dist_t_next = iter->first - current_pos;
        if ( K >= dist_t_next ) {
            K = K - dist_t_next + iter->second;
            current_pos = iter->first;
        }
        else break;
    }

    cout << current_pos + K << endl;

    return 0;
}