# UVa_codes
Assignment for 1.2 S.P.L.S-2 
#include<cstdio>
#include<cmath>
int main()
{
    short int n{0};
    scanf("%hi",&n);
    while(n--)
    {
        int a{0},b{0};
        scanf("%d %d",&a,&b);
        a=(a/3)*(b/3);
        printf("%d\n",a);
    }
    return 0;
}
