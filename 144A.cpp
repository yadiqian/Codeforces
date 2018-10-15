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
    int height;
    int min = 100;
    int max = 0;
    int indexMin;
    int indexMax;
    for (int i = 0; i < n; i++) {
        cin >> height;
        if (height <= min) {
            min = height;
            indexMin = i;
        }
        if (height > max) {
            max = height;
            indexMax = i;
        }
    }
    int numMove = (n - 1 - indexMin) + indexMax;
    if (indexMin < indexMax)
        numMove--;
    cout << numMove;
    
    return 0;
}