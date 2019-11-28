# UVa_codes
Assignment for 1.2 S.P.L.S-2 
#include <iostream>
using namespace std;
int main()
{
    double x1{0}, y1{0}, x2{0}, y2{0}, x3{0}, y3{0}, x4{0}, y4{0};
    while (scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4)!=EOF)
    {
        if(x1 == x3 && y1 == y3)
        {
            printf("%.3lf %.3lf\n", (x2+x4)-x1, (y2+y4)-y1);
        }
        else if(x1 == x4 && y1 == y4)
        {
            printf("%.3lf %.3lf\n", (x2+x3)-x1, (y2+y3)-y1);
        }
        else if(x2 == x3 && y2 == y3) {
            printf("%.3lf %.3lf\n", (x1 + x4) - x2, (y1 + y4) - y2);
        }
        else{
            printf("%.3lf %.3lf\n", (x1+x3)-x2, (y1+y3)-y2);
        }
    }
    return 0;
}
