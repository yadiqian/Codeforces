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

    int col;
    cin >> col;
    int n;
    int* array = new int[col];
    for (int i = 0; i < col; i++) {
        cin >> n;
        array[i] = n;
    }
    sort(array, array + col);
    for (int i = 0;i < col; i++) {
        cout << array[i] << " ";
    }

    
    return 0;
}