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

    int n, d;
    cin >> n >> d;
    int test;
    cin >> test;
    int x, y;
    while (test > 0) {
        cin >> x >> y;
        int y1 = -x + d;
        int y2 = x + d;
        int y3 = x - d;
        int y4 = -x + 2 * n - d;

        if (y >= y1 && y <= y4 && y <=y2 && y >= y3 && x >= 0 && x <= n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        test--;
    }
    
    return 0;
}