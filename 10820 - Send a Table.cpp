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
const int N = 50001 + 1;
ll phi[N];

void calculatePhi() {
    // Fast way to calculate Euler’s Totient function Φ(n)
    // suitable for quaries
    for (int i = 1; i < N; i++) {
        phi[i] = i;
    }

    for (int i = 2; i < N; i++) {
        if(phi[i] == i) {
            phi[i] = phi[i]-1;
            for (int j = i+i; j < N; j += i) {
                phi[j] = (ll) (phi[j]/i) * (i-1);
            }
        }
    }
}

int main() {
    FastIO;

    calculatePhi();
    for (int i = 2; i < N; i++) {
        phi[i] = (phi[i] * 2) + phi[i-1];
    }
    int n{0};
    while(std::cin >> n && n) {
        std::cout << phi[n] << std::endl;
    }
    
    return 0;
}
