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

    int64 n, m , a;
    cin >> n >> m;
    set<int64> s;
    int array[n + 1];
    for (int i = 0; i < n + 1; i++) {
        array[i] = 0;
    }
    for (int i = 0; i < m; i++) {
        cin >> a;
        s.insert(a);
        array[a]++;
        if (s.size() == n) {
            cout << 1;
            s.clear();
            for (int j = 0; j < n + 1; j++) {
                if (array[j]) {
                    array[j]--;
                }
            }
            for (int j = 0; j < n + 1; j++) {
                if (array[j]) {
                    s.insert(j);
                }
            }
        }
        else
            cout << 0;
    }
    
    
    return 0;
}