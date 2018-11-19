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
    int length = s.length();
    int row = (int)ceil((double)length / (double)20);
    int col = (int)ceil((double)length / (double)row);
    int extra = row * col - length;
    cout << row << " " << col << endl;
    string out = "";
    int total = 0;
    for (int i = 0; i < length; i++) {
        out += s[i];
        total++;
        if (total + 1 == col) {
            if (extra > 0) {
                out += '*';
                extra--;
                total++;
            }
        }
        if (total == col) {
            cout << out << endl;
            out = "";
            total = 0;
        }

    }
    
    return 0;
}