#include <iostream>
#include <vector> 
#include <unordered_map>
#include <algorithm>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;

// void findUpperBound(vector<pair<int, ll> >& arr,
//                     pair<int, ll>& p)
// {
//     auto up = upper_bound(arr.begin(), arr.end(), p);
// }


int main() {

    string chokudai = "chokudai";
    const int MOD = 1000000007;

    string s;
    cin >> s;

    unordered_map<char, vector<pair<int, ll>>> m;
    rep(i, chokudai.size()) m[chokudai[i]] = vector<pair<int, ll>>(0);

    int idx = 0;
    for ( char c : s ) {
        m[c].push_back(make_pair(idx++, 0)); 
    }


    int count = 1;
    for ( int i = m['i'].size()-1; i >= 0; i-- ) {
        m['i'][i].second = count++;
    }

    for ( int i = chokudai.size()-2; i >= 0; i-- ) {
        for ( int j = m[chokudai[i]].size()-1; j >= 0; j--) {


            //auto k = upper_bound(m[chokudai[i+1]].begin(), m[chokudai[i+1]].end(), make_pair(m[chokudai[i]][j].first, 0));
            int left = 0, right = m[chokudai[i+1]].size(), mid = 0;;
            while ( left < right ) {
                mid = left + (right - left) / 2;
                cout << mid << endl;
                if (m[chokudai[i+1]][mid].first < m[chokudai[i]][j].first) left = mid+1;
                else right = mid;
            }
            int k = left;
            // for ( ; k < m[chokudai[i+1]].size(); k++ ) {
            //     if (m[chokudai[i+1]][k].first > m[chokudai[i]][j].first) break;
            // }

            if (k == m[chokudai[i+1]].size()) m[chokudai[i]][j].second = 0;
            else m[chokudai[i]][j].second = m[chokudai[i+1]][k].second;

            if ( j != m[chokudai[i]].size()-1 ) {
                m[chokudai[i]][j].second += m[chokudai[i]][j+1].second;
                 m[chokudai[i]][j].second =  m[chokudai[i]][j].second % MOD;
            }
        }
    }

    // for ( char c : chokudai ) {
    //     for ( int i = 0; i < m[c].size(); i++ ) {
    //         cout << m[c][i].first << "(" << m[c][i].second << "), ";
    //     }
    //     cout << endl;
    // }

    cout <<  m['c'][0].second << endl;


    return 0;
}
