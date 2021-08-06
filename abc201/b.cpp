#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)

int main() {

    int N; cin >> N;

    int max_hegiht[2] = {0, 0};
    string max_name[2] = {"", ""};

    rep(i, N) {
        string name; cin >> name;
        int height; cin >> height;

        if ( height > max_hegiht[0] ) {
            max_hegiht[1] = max_hegiht[0];
            max_name[1] = max_name[0];
            max_hegiht[0] = height;
            max_name[0] = name;

        }
        else if( height > max_hegiht[1] ) {
            max_hegiht[1] = height;
            max_name[1] = name;
        }
    }

    cout << max_name[1] << endl;

    return 0;
}
