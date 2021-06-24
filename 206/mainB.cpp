#include<iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    int total = 0;

    while (1) {
        total += i;
        if ( total >= n ) {
            cout << i << endl;
            break;
        }
        i++;
    }

    return 0;
}