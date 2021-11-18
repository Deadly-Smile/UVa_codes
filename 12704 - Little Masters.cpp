#include<stdio.h>
#include <cmath>
int main()
{
    short int n{0};
    scanf("%hi",&n);
    while(n--)
    {
        short int x{0},y{0},r{0};
        scanf("%hi %hi %hi",&x,&y,&r);
        float max{0},min{0};
        max=(float)sqrt((x*x)+(y*y));
        min=(float)r-max;
        max=max+r;
        printf("%.2f %.2f\n",min,max);
     }
    return 0;
}
