#include<iostream>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
    int N, Q;
    cin >> N;
    cin >> Q;

    vector<int> A(N);
    for ( auto &nx : A ) {
        cin >> nx;
    }

    vector<int> K(Q);
    for ( auto &nx : K ) {
        cin >> nx;
    }

    sort(K.begin(), K.end());

    int at_kth = 0;
    int at_n = 0;;
    auto iterA = A.begin();
    for ( auto kth : K ) {
        cout << "at" << kth << endl;
        while ( kth != at_kth ) {
            at_n++;
            if ( iterA != A.end() && kth == *iterA ) {
                iterA++;
                continue;
            }
            at_kth++;
        }
        cout << at_n << endl;
    }



    return 0;
}