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

int main() {
    FastIO;

    int step{0},mod{0};
    while(std::cin >> step >> mod) {
        if(gcd(step, mod) == 1) {
            std::cout << setw(10) << step << 
            setw(10) << mod << "    " << 
            "Good Choice" << std::endl;
        } else {
            std::cout << setw(10) << step << 
            setw(10) << mod << "    " << 
            "Bad Choice" << std::endl;
        }   std::cout << std::endl;
    }
    
    return 0;
}
