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

    int a, b, c, d, total;
    cin >> a >> b >> c >> d >> total;
    int arr[4] = {a, b, c, d};
    int num = 0;
    for (int i = 1; i<= total; i++) {
        for (int j = 0; j < 4; j++) {
            if (i % arr[j] == 0) {
                num++;
                break;
            }
        }
    }
    cout << num;
    
    return 0;
}