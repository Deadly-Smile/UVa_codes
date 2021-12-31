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
int binaryToDecimal(string num) {
    int value = 0;
    int base = 1;
 
    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            value += base;
        base *= 2;
    } 
    return value;
}

template<typename T1>
T1 gcd (T1 a, T1 b) {
    if (b == 0) return a;
    else    return gcd (b, a%b);
}

int main() {
    FastIO;

    int test{0};   std::cin >> test;
    for (int t = 1; t <= test; t++) {
        string s1,s2;
        Ignore;
        std::cin >> s1;
        Ignore;
        std::cin >> s2;

        int a = binaryToDecimal(s1);
        int b = binaryToDecimal(s2);

        // std::cout << a << " " << b << std::endl;

        std::cout << "Pair #" << t << ": ";
        if(gcd(a,b) > 1) {
            std::cout << "All you need is love!" << std::endl;
        } else {
            std::cout << "Love is not all you need!" << std::endl;
        }
    }
    
    return 0;
}
