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

    int64 testcase, n;
    cin >> testcase;
    int64 sum = 0;
    int64* array = new int64[testcase];
    for (int i = 0; i < testcase; i++) {
        cin >> n;
        array[i] = n;
    }
    sort(array, array + testcase);
    for (int64 i = 0; i < testcase; i++) {
        sum += (i + 2) * array[i];
        if (i == testcase - 1)
            sum -= array[i];
    }
    cout << sum;
    
    return 0;
}