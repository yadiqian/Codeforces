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

bool distinct(string num) {
    set<char> s;
    for (int i = 0; i < num.length(); i++) {
        s.insert(num[i]);
    }
    if (s.size() == 4)
        return true;
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    cin >> num;
    num++;
    while(!distinct(to_string(num))) {
        num++;
    }
    cout << num;

    
    return 0;
}