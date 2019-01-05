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

    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    for (int i = 0; i < s1.length(); i++) {
        if (s3.find(s1[i]) == string::npos) {
            cout << "NO";
            return 0;
        }
        s3[s3.find(s1[i])] = '-';
    }
    for (int i = 0; i < s2.length(); i++) {
        if (s3.find(s2[i]) == string::npos) {
            cout << "NO";
            return 0;
        }
        s3[s3.find(s2[i])] = '-';
    }
    for (int i = 0; i < s3.length(); i++) {
        if (s3[i] != '-') {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    
    return 0;
}