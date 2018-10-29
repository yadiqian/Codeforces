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

    int n;
    string s;
    cin >> n >> s;
    int A = 0;
    int D = 0;
    for (int i = 0; i < n; i++) {
        char win = s[i];
        if (win == 'A')
            A++;
        else
            D++;
    }
    if (A > D)
        cout << "Anton";
    else if (A < D)
        cout << "Danik";
    else
        cout << "Friendship";
    
    return 0;
}