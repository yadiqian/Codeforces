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

    int s, n;
    cin >> s >> n;
    int x, y;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        v.push_back(pair<int, int>(x, y));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        if (s > v[i].first) {
            s += v[i].second;
        }
        else {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    
    return 0;
}