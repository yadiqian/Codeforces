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

    int64 n, m, a;
    cin >> n >> m >> a;
    vector<int> v;
    v.push_back(a);
    for (int i = 1; i < m; i++) {
        cin >> a;
        if (a != v[v.size() - 1])
            v.push_back(a);
    }
    int laps = 1;
    for(int i = 1; i < v.size(); i++) {
        if (v[i] < v[i - 1])
            laps++;
    }
    cout << (laps - 1) * n + v[v.size() - 1] - 1;
    
    return 0;
}