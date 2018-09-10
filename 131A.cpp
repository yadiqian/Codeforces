/*
  Yadi Qian
*/

#include <bits/stdc++.h>

using namespace std;

const double pi=acos(-1.0);
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    bool first = true;

    for (int i = 0; i < s.length(); i++) {
        if (i == 0 && islower(s[i]))
            first = false;
        else if (islower(s[i])){
            cout << s;
            return 0;
        }
    }

    if (!first) {
        for (int i = 0; i < s.length(); i++) {
            if (i == 0)
                cout << (char)toupper(s[i]);
            else {
                cout << (char)tolower(s[i]);
            }
        }
    }
    else {
        for (int i = 0; i < s.length(); i++) {
            cout << (char)tolower(s[i]);
        }
    }
    
    return 0;
}