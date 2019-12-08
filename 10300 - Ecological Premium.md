# UVa_codes
Assignment for 1.2 S.P.L.S-2 
#include<stdio.h>
int main()
{
    short int n{0};
    scanf("%hi",&n);
    while(n--)
    {
        short int f{0};
        scanf("%hi",&f);
        int sum{0};
        while(f--)
        {
            int a{0},b{0},c{0};
            scanf("%d %d %d",&a,&b,&c);
            sum+=a*c;
        }
        printf("%d\n",sum);
    }
    return 0;
}
