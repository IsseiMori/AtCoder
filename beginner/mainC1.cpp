#include<iostream>

using namespace std;

int main()
{
    int N, Y;
    cin >> N >> Y;

    int sen = 0;
    int gosen = 0;
    int ichiman = 0;

    while ( sen * 1000 <= Y && sen <= N ) {
        gosen = 0;
        while ( gosen * 5000 + sen * 1000 <= Y && gosen + sen <= N ) {
            ichiman = N - sen - gosen;
            if ( ichiman + gosen + sen == N && 
                 ichiman * 10000 + gosen * 5000 + sen * 1000 == Y ) {
                cout << ichiman << " " << gosen << " " << sen << endl;
                return 0;
            }
            gosen++;
        }
        sen++;
    }

    cout << "-1 -1 -1" << endl;

    return 0;
}