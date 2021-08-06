#include <iostream>

using namespace std;

int main() {

    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long blue = a;
    long long red = 0;

    for(int i = 1; i <= a; i++){
        blue += b;
        red += c;
        if(blue <= d*red){
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}