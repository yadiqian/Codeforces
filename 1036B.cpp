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

    int num;
    cin >> num;

    while (num > 0) {
        int64 n, m, k;
        cin >> n >> m >> k;
        int64 smaller = min(n, m);
        int64 bigger = max(n, m);
        int64 optimal = bigger;
        int64 difference = bigger - smaller;
        int64 diagonal = 0;

        if (k < optimal)
            diagonal = -1;
        else {
            if (difference % 2 == 0)
                diagonal = optimal;
            else
                diagonal = optimal - 1;

            if (k > optimal) {
                int64 extra = k - optimal;
                if (extra % 2 == 0)
                    diagonal += extra;
                else if (difference % 2 == 1)
                    diagonal += extra;
                else
                    diagonal += extra - 2;
            }
        }

        num--;
        cout << diagonal << endl;
    }
    
    return 0;
}