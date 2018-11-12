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

    int testcase;
    cin >> testcase;
    pair<int, int>* array = new pair<int, int>[testcase];
    for (int i = 0; i < testcase; i++) {
        int home, guest;
        cin >> home >> guest;
        array[i] = pair<int, int>(home, guest);
    }
    int collision = 0;
    for (int i = 0; i < testcase; i++) {
        for (int j = i; j < testcase; j++) {
            if (array[i].first == array[j].second)
                collision++;
            if (array[j].first == array[i].second)
                collision++;
        }
    }

    cout << collision;
    
    return 0;
}