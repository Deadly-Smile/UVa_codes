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
const int N = 502;
int record[N] = {0};
template<typename T1>
T1 gcd (T1 a, T1 b) {
    if (b == 0) return a;
    else    return gcd (b, a%b);
}

void initialize () {
    for (int i = 1; i < N; i++) {
        int sum {0};
        for (int j = 1; j < i; j++) {
            for (int k = j+1; k <= i; k++) {
                sum += gcd(j,k);
            }
        }   record[i] = sum;
    }
}

int main() {
    FastIO;
    initialize();

    int n{0};
    while(std::cin >> n && n) {
        std::cout << record[n] << std::endl;
    }
    return 0;
}
