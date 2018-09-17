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

    int number;
    string num;
    cin >> number;
    num = to_string(number);
    bool lucky = true;
    vector<int> luckyNum = {4, 7, 47, 74, 444, 447, 474, 744, 747, 777};

    for (int i= 0; i < num.length(); i++) {
        if (num[i] != '4' && num[i] != '7')
            lucky = false;
    }
    if (lucky) {
        cout << "YES";
        return 0;
    }
    else {
        for (int i = 0; i < luckyNum.size(); i++) {
            if (number % luckyNum[i] == 0) {
                cout << "YES";
                return 0;
            }

        }
        cout << "NO";
    }
    
    return 0;
}