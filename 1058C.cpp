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

    int n;
    cin >> n;
    string num;
    cin >> num;
    int array[n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int a = num[i] - '0';
        array[i] = a;
        sum += a;
    }
    for (int i = 2; i <= n; i++) {
        if (sum % i == 0) {
            int s = 0;
            bool lucky = true;
            for (int j = 0; j < n; j++) {
                if (array[j] > sum / i) {
                    lucky = false;
                    break;
                }
                else {
                    s += array[j];
                }
                if (s == sum / i) {
                    s = 0;
                }
                else if (s > sum / i) {
                    lucky = false;
                }
            }
            if (lucky) {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    
    
    return 0;
}