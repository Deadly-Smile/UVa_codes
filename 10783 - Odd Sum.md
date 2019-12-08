# UVa_codes
Assignment for 1.2 S.P.L.S-2 
#include<stdio.h>
int main()
{
    int n{0};
    scanf("%d",&n);
    for(short int j=1;j<=n;++j)
    {
        int a{0},b{0},sum{0};
        scanf("%d %d",&a,&b);
        for(int i=a;i<=b;i++)
        {
            if(i%2==1)
            {
                sum+=i;
            }
        }
        printf("Case %d: %d\n",j,sum);
    }
    return 0;
}
