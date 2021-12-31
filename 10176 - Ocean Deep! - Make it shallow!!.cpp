//----------------------Created by Anik Saha---------------------------//
#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(false);    cin.tie(NULL)
#define Ignore cin.ignore()
typedef unsigned char Byte;
typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> pairs;
typedef std::vector<int> VI;
typedef std::vector<pairs> VII;
//---------------------------Good luck---------------------------------//
const int M = 131071;

int main() {
    FastIO;

    string s;
    ll temp{0};
    while(getline(cin, s)) {
        for (auto &i : s) {
            if(i == '#') {
                if(!temp)    std::cout << "YES" << std::endl;
                else         std::cout << "NO"  << std::endl;
                temp = 0;
            } else {
                if(i >= '0' && i <= '9') {
                    temp = ((i - '0') + (temp * 2)) % M;
                }
            }
        }
    }
    
    return 0;
}
