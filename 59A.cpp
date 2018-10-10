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
    string lower = "";
    string upper = "";
    int u = 0;
    int l = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 97 && s[i] <= 122) {
            l++;
            lower += s[i];
            upper += (char)toupper(s[i]);
        }
        else if (s[i] >= 65 && s[i] <= 90) {
            u++;
            lower += (char)tolower(s[i]);
            upper += s[i];
        }
    }
    if (l >= u)
        cout << lower;
    else
        cout << upper;
    
    return 0;
}