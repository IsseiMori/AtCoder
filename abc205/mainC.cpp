#include<iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    if ( c % 2 == 0 ) {
        a = abs(a);
        b = abs(b);
    }

    if ( a == b ) cout << "=" << endl;
    else if ( ( a > 0 && b > 0 ) || ( a < 0 && b < 0 ) ) {
        if ( a > b ) cout << ">" << endl;
        else cout << "<" << endl;
    }
    else {
        if ( a < 0 ) cout << "<" << endl;
        else if ( a > 0 ) cout << ">" << endl;
        else if ( b < 0 ) cout << ">" << endl;
        else cout << "<" << endl;
    }

    return 0;
}