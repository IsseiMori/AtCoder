#include <iostream>
#include <vector> 
#include <unordered_set>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;

int main() {

    string s;
    unordered_set<string> set;
    rep(i, 4) {
        cin >> s;
        set.insert(s);
    }

    if ( set.find("H") != set.end() && 
         set.find("2B") != set.end() && 
         set.find("3B") != set.end() && 
         set.find("HR") != set.end() ) 
        cout << "Yes" << endl;
    else cout << "No" << endl;



    return 0;
}
