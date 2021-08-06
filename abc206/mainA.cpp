#include<iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int price = floor(1.08 * n);

    if ( price == 206 ) cout << "so-so" << endl;
    else if ( price < 206 ) cout << "Yay!"<< endl;
    else cout << ":(" << endl;

    return 0;
}