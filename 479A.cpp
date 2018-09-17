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

    int array[3];
    for (int i = 0; i < 3; i++) {
        int n;
        cin >> n;
        array[i] = n;
    }
    int result1;
    int result2;
    int result3;
    int result4;
    int max = 0;
    result1 = array[0] + array[1] + array[2];
    max = result1;
    result2 = array[0] * (array[1] + array[2]);
    if (result2 > max)
        max = result2;
    result3 = array[0] * array[1] * array[2];
    if (result3 > max)
        max = result3;
    result4 = (array[0] + array[1]) * array[2];
    if (result4 > max)
        max = result4;

    cout << max;
    
    
    return 0;
}