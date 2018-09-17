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

    int n, m;
    cin >> n >> m;
    int number;
    int array[m];
    for (int i = 0; i < m; i++) {
        cin >> number;
        array[i] = number;
    }
    sort(array, array + m);

    int min = 10000000;
    int dif;
    for (int i = 0; i <= m - n; i++) {
        dif = abs(array[i] - array[i + n - 1]);
        if (dif < min)
            min = dif;
    }
    cout << min;


    return 0;
}