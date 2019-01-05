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

    string card, hand;
    cin >> card;
    for (int i = 0; i < 5; i++) {
        cin >> hand;
        if (hand[0] == card[0]) {
            cout << "YES";
            return 0;
        }
        if (hand[1] == card[1]) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    
    return 0;
}