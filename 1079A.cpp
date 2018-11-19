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

bool contain(vector<int> v, int n) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == n)
            return true;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int numU, numG;
    cin >> numU >> numG;
    unordered_map<int, int> m;
    vector<int> v;
    for (int i = 0; i < numU; i++) {
        int utensil;
        cin >> utensil;
        if (!contain(v, utensil))
            v.push_back(utensil);
        m[utensil]++;
    }
    int max = 0;
    for (int i = 0; i < v.size(); i++) {
        if (m[v[i]] > max) {
            max = m[v[i]];
        }
    }

    cout << ceil((double)max / (double)numG) * v.size() * numG - numU;
    
    return 0;
}