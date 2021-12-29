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
template<typename T1>
T1 gcd (T1 a, T1 b) {
    if (b == 0) return a;
    else    return gcd (b, a%b);
}

void calculate (int a, int b, int &x, int &y) {
    if(a == 0) {
        x = 0;
        y = 1;
    } else {
        int x1{0},y1{0};
        calculate(b%a, a, x1, y1);
        x = y1 - ((b/a) * x1);
        y = x1;
    }
}

pair<int, int> extendedEuclid(int a, int b) {
    int x{0},y{0};
    calculate(a, b, x, y);
    return {x,y};
}

int main() {
    FastIO;

    int a{0},b{0};
    while(std::cin >> a >> b) {
        // Now you know why I hate UVa :)
        if(a == b && !a) {
            std::cout << "1 0 " << a << std::endl;
            continue;
        }
        if(a == b) {
            std::cout << "0 1 " << a << std::endl;
            continue;
        }
        
        int d = gcd(a, b);
        pairs p = extendedEuclid(a, b);
        std::cout << p.first << " " << p.second << " " << d << std::endl;
    }
    
    return 0;
}
