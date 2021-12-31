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

    double a{0.00},b{0.00},c{0.00};
    while(std::cin >> a >> b >> c) {
        if(!a && !b && !c) {
            printf("The radius of the round table is: 0.000\n");
            continue;
        }
        // It's just a incircle formula implementation
        double s = (a+b+c) / 2;
        double A = sqrt(s * (s - a) * (s - b) * (s - c));
        double r = A/s;
        printf("The radius of the round table is: %.3lf\n", r);
    }
    
    return 0;
}
