
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
long long power(int x1, long long y, int M) { 
    // O(logN)
    long long ans{1}, x{x1};
    x = x % M;
    if(!x)  return 0;
    while (y > 0) {
        if (y & 1) {
            ans = (ans*x) % M;
        }

        y = y >> 1;
        x = (x*x) % M;
    }
    return ans % M;
}

int main() {
    FastIO;

    int b{0},p{0},m{0};
    while(std::cin >> b >> p >> m) {
        ll res = power(b, p, m);
        std::cout << res << std::endl;
    }
    
    return 0;
}
