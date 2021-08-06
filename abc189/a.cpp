#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)

int main() {

    string str;
    cin >> str;

    if ( str.size() == 3 &&
         str[0] == str[1] &&
         str[1] == str[2]) {
        cout << "Won" << endl;
    }
    else {
        cout << "Lost" << endl;
    }

    return 0;
}
