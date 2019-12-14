# UVa_codes
Assignment for 1.2 S.P.L.S-2 
#include<stdio.h>
int main()
{
    short int n=0;
    scanf("%hi",&n);
    while(n--)
    {
        short int a=0,b=0,k,i,j;
        scanf("%hi %hi",&a,&b);
        for(k=0;k<b;++k)
        {
            for(i=1;i<=a;++i)
            {
                for(j=1;j<=i;++j)
                {
                    printf("%hi",i);
                }
                printf("\n");
            }
            for(i=a-1;i>=1;--i)
            {
                for(j=i;j>=1;--j)
                {
                    printf("%hi",i);
                }
                printf("\n");
            }
            if(k!=b-1)
            {
                printf("\n");
            }
        }
        if(n!=0)
        {
            printf("\n");
        }
    }
    return 0;
}
