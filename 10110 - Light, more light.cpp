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
string solve(ll n) {
    ll temp = sqrt(n);
    if(temp * temp == n)
        return "yes";
    return "no";
}

int main() {
    FastIO;

    ll n{0};
    while(std::cin >> n) {
        if(!n)  break;
        std::cout << solve(n) << std::endl;
    }

    return 0;
}
