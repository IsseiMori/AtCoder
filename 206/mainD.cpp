#include<iostream>
#include <math.h>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    unordered_map<int, vector<long unsigned int>> umap;
    for ( int i = 0; i < N; i++ ) {
        cin >> A[i];
        umap[A[i]].push_back(i);
    }

    // for (auto x : umap) {
    //     cout << x.first << " ";
    //     for (auto y : x.second)
    //         cout << y << " ";
    //     cout << endl;
    // }


    int total = 0;
    for ( long unsigned i = 0; i < A.size(); i++ ) {
        int dup_on_right = 0;
        for (auto y : umap[A[i]]) {
            if ( y > i ) dup_on_right++;
        }
        total += N - (i+1) - dup_on_right;
    }

    cout << total << endl;
    
    return 0;
}