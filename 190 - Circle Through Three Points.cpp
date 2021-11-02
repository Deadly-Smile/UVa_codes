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

    double x1{0.00},x2{0.00},x3{0.00},y1{0.00},y2{0.00},y3{0.00};
    while(std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3) {
        double a1{0.00},a2{0.00},b1{0.00},b2{0.00},c1{0.00},c2{0.00};
        a1 = x2 - x1;
        b1 = y2 - y1;
        c1 = ((x1*x1 + y1*y1) - (x2*x2 + y2*y2))/2;
        a2 = x3 - x1;
        b2 = y3 - y1;
        c2 = ((x1*x1 + y1*y1) - (x3*x3 + y3*y3))/2;

        double h = (b1*c2 - b2*c1) / (a1*b2 - a2*b1);
        double k = (c1*a2 - c2*a1) / (a1*b2 - a2*b1);
        double r = sqrt(((x1 - h)*(x1 - h)) + ((y1 - k)*(y1 - k)));
        double g = (h*2)*(-1);
        double f = (k*2)*(-1);
        double c = (h*h + k*k) - r*r;


        // this is why I hate UVa :/
        if(abs(h - 0.000) < 0.0005) {
            printf("x^2 + ");
        } else if (h > 0) {
            printf("(x - %.3lf)^2 + ",h);
        } else {
            h = abs(h);
            printf("(x + %.3lf)^2 + ",h);
        }
        if(abs(k - 0.000) < 0.0005) {
            printf("y^2 = %.3lf^2\n",r);
        } else if (k > 0) {
            printf("(y - %.3lf)^2 = %.3lf^2\n",k,r);
        } else {
            k = abs(k);
            printf("(y + %.3lf)^2 = %.3lf^2\n",k,r);
        }
        
        printf("x^2 + y^2 ");
        if(abs(g - 0.000) < 0.0005) {
            ;
        } else if(g > 0) {
            printf("+ %.3lfx ", g);
        } else {
            g = abs(g);
            printf("- %.3lfx ", g);
        }
        
        if(abs(f - 0.000) < 0.0005) {
            ;
        } else if(f > 0) {
            printf("+ %.3lfy ", f);
        } else {
            f = abs(f);
            printf("- %.3lfy ", f);
        }

        if (c > 0) {
            printf("+ %.3lf = 0\n", c);
        } else {
            c = abs(c);
            printf("- %.3lf = 0\n", c);
        }
        printf("\n");
    }
    
    return 0;
}
