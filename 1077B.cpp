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
    int light;
    int* array = new int[num];
    for (int i = 0; i < num; i++) {
        cin >> light;
        array[i] = light;
    }
    int off = 0;
    for (int i = 1; i < num - 1; i++) {
        if (array[i - 1] && array[i + 1] && !array[i]) {
            array[i + 1] = 0;
            off++;
        }
    }
    cout << off;
    
    return 0;
}