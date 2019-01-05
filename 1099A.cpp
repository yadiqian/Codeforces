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

    int w, h, w1, h1, w2, h2;
    cin >> w >> h >> w1 >> h1 >> w2 >> h2;
    int result = w;

    for (int i = h; i >= 0; i--) {
        result += i;
       if (i == h2)
           result -=w2;
       if (i == h1)
           result -= w1;
       if (result < 0)
           result = 0;

    }

    cout << result;
    
    return 0;
}