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
    int length;
    cin >> s >> length;
    string result = "";
    int candy = 0;
    int snow = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '?')
            candy++;
        if (s[i] == '*')
            snow++;
    }
    if ((length < s.length() - 2 * candy - 2 * snow) || (length > s.length() - candy && snow == 0)) {
        cout << "Impossible";
        return 0;
    }
    bool added = false;
    if (length > s.length() - candy - snow) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != '?' && s[i] != '*') {
                result += s[i];
            }
            if (s[i] == '*' && !added) {
                for (int j = 0; j < length - (s.length() - candy - snow); j++) {
                    result += s[i - 1];
                }
                added = true;
            }
        }
    }
    else if (length == s.length() - candy - snow) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != '?' && s[i] != '*') {
                result += s[i];
            }
        }
    }
    else {
        int toremove = s.length() - candy - snow - length;
        for (int i = 1; i < s.length(); i++) {
            if (s[i] != '?' && s[i] != '*') {
                result += s[i - 1];
            }
            else {
                if (toremove <= 0) {
                    result += s[i - 1];
                }
                toremove--;
                i++;
            }
        }
        if (s[s.length() - 1] != '*' && s[s.length() - 1] != '?')
            result += s[s.length() - 1];
    }

    cout << result;
    return 0;
}