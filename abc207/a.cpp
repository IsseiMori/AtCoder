#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    vector<int> v(3, 0);
    for ( int i = 0; i < 3; i++ ) {
        int tmp;
        cin >> tmp;
        v[i] = tmp;
    }

    sort(v.begin(), v.end());

    cout << v[1]+v[2] << endl;

    return 0;
}