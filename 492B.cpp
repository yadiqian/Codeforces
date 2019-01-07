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

    int n, l, a;
    cin >> n >> l;
    vector<int> v;
    v.push_back(0);
    v.push_back(l);
    for (int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    double max = 0.0;
    for (int i = 1; i < v.size(); i++) {
        double dif = v[i] - v[i - 1];
        if (i != 1 && i != v.size() - 1)
            dif /= 2;
        if (dif > max)
            max = dif;
    }
    cout << fixed << setprecision(10) << max;

    
    return 0;
}