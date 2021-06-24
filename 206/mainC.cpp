#include<iostream>
#include <math.h>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main()
{
    long long N;
    cin >> N;

    vector<int> A(N);
    unordered_map<int, long long> umap;
    for ( int i = 0; i < N; i++ ) {
        cin >> A[i];
        umap[A[i]]++;
    }

    long long res1 = (N*(N-1)/2);


    sort(A.begin(), A.end());
    A.push_back(-1);
    long long cnt = 1;
    for ( size_t i = 0; i < N; i++ ) {
        if ( A[i] != A[i+1] ) {
            res1 -= (cnt*(cnt-1)/2);
            cnt = 1;
        }
        else cnt++;
    }

    cout << res1 << endl;
    
    return 0;
}

// int find_index(vector<int> vec, long val) {
//     auto iter = upper_bound(vec.begin(), vec.end(), val);
//     return vec.end() - iter;
// }

// int main()
// {
//     long long N;
//     cin >> N;

//     vector<int> A(N);
//     unordered_map<long, vector<int>> umap;
//     for ( int i = 0; i < N; i++ ) {
//         cin >> A[i];
//         umap[A[i]].push_back(i);
//     }


//     long long total = 0;
//     for ( size_t i = 0; i < A.size(); i++ ) {
//         long long dup_on_right = 0;

//         auto indices = umap[A[i]];
//         dup_on_right = find_index(indices, i);
//         total += N - (i+1) - dup_on_right;
//     }

//     cout << total << endl;
    
//     return 0;
// }