#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)

enum State {In, NotIn, Unknown};

int main() {

    string s; cin >> s;

    State states[10];

    rep(i, 10) {
        switch (s[i]){
            case('o'):
                states[i] = State::In;
                break;
            case('x'):
                states[i] = State::NotIn;
                break;
            case('?'):
                states[i] = State::Unknown;
                break;
            default:
                break;
        }
    }

    int ans = 0;

    rep(i, 10000) {
        bool nums[10] = { 0 };
        int n = i;
        rep(j, 4) {
            nums[n%10] = true; 
            n/=10;
        }

        bool ok = true;
        rep(j, 10) {
            if ( nums[j] && states[j] == State::NotIn ) ok = false;
            if ( states[j] == State::In && !nums[j] ) ok = false;
        }
        if ( ok ) ans++;
    }

    cout << ans << endl;

    return 0;
}
