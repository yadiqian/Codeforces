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

    int n, k, a;
    cin >> n >> k;
    pair<int, int> array[n];
    for (int i = 0; i < n; i++) {
        array[i] = pair<int, int>(0, 0);
    }

    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a == 1) {
            array[i % k].first++;
        } else
            array[i % k].second++;
    }

    int max = 0;
    int totalLeft = 0;
    int totalRight = 0;
    for (int i = 0; i < k; i++) {
        totalLeft += array[i].first;
        totalRight += array[i].second;
    }
    for (int i = 0; i < k; i++) {
        int dif = abs(totalLeft - array[i].first - (totalRight - array[i].second));
        if (dif > max)
            max = dif;
    }
    cout << max;
    
    return 0;
}