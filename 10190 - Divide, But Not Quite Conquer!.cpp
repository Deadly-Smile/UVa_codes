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


int main() {
    FastIO;

    ll n{0},m{0};
    while(std::cin >> n >> m) {
        if(!n || !m || m == 1 || n == 1) {
            std::cout << "Boring!" << std::endl;
            continue;
        }

        std::vector<ll> record;
        ll temp{n};
        bool isOk{true};
        while(n) {
            if(n % m) {
                isOk = false;
                break;
            } else {
                record.push_back(n / m);
                n /= m;
                if(n == 1)  break;
            }
        }

        if(!isOk)   std::cout << "Boring!" << std::endl;
        else {
            std::cout << temp;
            for (auto &i : record) {
                std::cout << " " << i;
            }   std::cout << std::endl;
        }
    }
    
    return 0;
}
