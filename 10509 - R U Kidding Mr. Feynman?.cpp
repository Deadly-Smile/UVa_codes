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

    double n{0.00};
    while(std::cin >> n && n) {
        if(abs(n-0.00) < 0.0000)
            break;
        
        int a = std::ceil(std::pow(n,(double)1/3));
        // stupid pow function
        if(a*a*a > n)   a--;

        double ans = (double)((n-(a*a*a)) / (3*a*a)) + a;
        printf("%.4lf\n", ans);
    }
    
    return 0;
}
