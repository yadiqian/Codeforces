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

    int test;
    cin >> test;
    string magnet;
    int group = 1;
    cin >> magnet;
    char a = magnet[0];
    for (int i = 1; i < test; i++) {
        cin >> magnet;
        if (magnet[0] != a) {
            group++;
            a = magnet[0];
        }

    }
    cout << group;
    
    return 0;
}