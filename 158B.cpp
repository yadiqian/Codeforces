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
    int numCar = 0;
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    for (int i = 0; i < num; i++) {
        int size;
        cin >> size;

        if (size == 4)
            numCar++;
        if (size == 3)
            num3++;
        if (size == 2)
            num2++;
        if (size == 1)
            num1++;
    }

    numCar += num2 / 2;
    if (num2 % 2 == 0) {
        num2 = 0;
    }
    else {
        num2 = 1;
    }

    while (num1 != 0 && num3 != 0) {
        numCar++;
        num1 --;
        num3 --;
    }

    while (num3 != 0) {
        numCar++;
        num3--;
    }

    if (num2 != 0) {
        if (num1 == 0) {
            numCar++;
        }
        else {
            int max = 2;
            while (max != 0 && num1 != 0) {
                num1--;
                max--;
            }
            numCar++;

        }
    }

    if (num1 != 0) {
        if (num1 % 4 == 0) {
            numCar += num1 / 4;
        }
        else {
            numCar += (num1 / 4 + 1);
        }
    }

    cout << numCar;
    
    return 0;
}