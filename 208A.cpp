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
    if (s.length() < 3) {
        cout << s;
        return 0;
    }
    for (int i = 0; i < s.length() - 2; i++) {
        if (s.substr(i, 3) == "WUB") {
            s[i] = '_';
            s[++i] = '_';
            s[++i] = '_';
        }
    }

    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] != '_')
            cout << s[i];
        if (s[i] != '_' && s[i + 1] == '_')
            cout << " ";
    }
    if (s[s.length() - 1] != '_')
        cout << s[s.length() - 1];
    
    return 0;
}