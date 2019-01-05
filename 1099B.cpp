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
    
    int64 n;
    cin >> n;
    int result;
    double root = sqrt((double)n);
    if (root == floor(root))
        result = 2 * (int)root;
    else if (n <= floor(root) * ceil(root) && n > floor(root) * floor(root))
        result = (int)floor(root) + (int)ceil(root);
    else if (n > floor(root) * ceil(root) && n < ceil(root) * ceil(root))
        result = 2 * (int)ceil(root);

    cout << result;

    return 0;
}