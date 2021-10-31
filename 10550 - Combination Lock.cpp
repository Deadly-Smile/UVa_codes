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
const int N = 40;

int main() {
    FastIO;

    int a{0},b{0},c{0},d{0};
    while(std::cin >> a >> b >> c >> d) {
        if(!(a || b || c || d)) break;
        int sum{0};
        sum += (a - b + N) % N;
        sum += (c - b + N) % N;
        sum += (c - d + N) % N;
        sum *= 9;
        sum += 1080;
        std::cout << sum << std::endl;
    }
    
    return 0;
}
