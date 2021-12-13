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
// const int N = 65001;
// bool prime[N] = {0};
// void calculatePrime(int n) {
//     prime[0] = true;
//     prime[1] = true;
//     for (int i = 2; i*i <= n; i++){
//         if (!prime[i]) {
//             for (int j = i*i; j <= n; j += i)
//                 prime[j] = true;
//         }
//     }
// }

// long long M = 1e9 + 7;
// long long power(int x1, long long y) { 
//     // O(logN)
//     long long ans{1}, x{x1};
//     x = x % M;
//     if(!x)  return 0;
//     while (y > 0) {
//         if (y & 1) {
//             ans = (ans*x) % M;
//         }

//         y = y >> 1;
//         x = (x*x) % M;
//     }
//     return ans % M;
// }

int carmichel[15] = {561, 1105, 1729, 2465, 2821, 6601, 8911, 
    10585, 15841, 29341, 41041, 46657, 52633, 62745, 63973};

int main() {
    FastIO;

    // calculatePrime(N);
    std::set<int> record;
    for (int i = 0; i < 15; i++) {
        record.insert(carmichel[i]);
    }
    int n{0};
    while(std::cin >> n && n) {
        // O(NlogN) but still TLE
        // M = n;
        // for (int i = 2; i < n; i++) {
        //     if (power(i, n) != i) {
        //         std::cout << n << " is normal." << std::endl;
        //         goto end;
        //     }
        // }
        // if(prime[n])    
        //     std::cout << "The number " << n << 
        //     " is a Carmichael number." << std::endl;
        // else
        //     std::cout << n << " is normal." << std::endl;
        // end:    ;

        // Used short-cut :p
        if(record.count(n)) 
            std::cout << "The number " << n << 
            " is a Carmichael number." << std::endl;
        else
            std::cout << n << " is normal." << std::endl;
    }
    return 0;
}
