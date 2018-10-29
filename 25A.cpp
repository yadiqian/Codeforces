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

    int t;
    cin >> t;
    int n;
    int odd = 0;
    int even = 0;
    int oddPos;
    int evenPos;
    bool findOdd = false;
    bool findEven = false;
    for (int i = 0; i < t; i++) {
        cin >> n;
        if (n % 2 == 0)
            even++;
        else
            odd++;
        if (odd == 1 && !findOdd) {
            oddPos = i + 1;
            findOdd = true;
        }
        if (even == 1 && !findEven) {
            evenPos = i + 1;
            findEven = true;
        }
        if (even > 1 && odd == 1) {
            cout << oddPos;
            return 0;
        }
        if (odd > 1 && even == 1) {
            cout << evenPos;
            return 0;
        }
    }
    
    return 0;
}