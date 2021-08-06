#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)

int main() {

    int a, b, w;
    cin >> a >> b >> w;

    w *= 1000;

    int max = w / a;
    int min = (w+b-1) / b;

    if ( min > max ) cout << "UNSATISFIABLE" << endl;
    else cout << min << " " << max << endl;

    return 0;
}
