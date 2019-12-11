# UVa_codes
Assignment for 1.2 S.P.L.S-2 
#include<cstdio>
#include<cmath>
int main()
{
    int a{0},b{0};
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if( a==0 && b==0 )
            break;
        int count{0},num{0};
        float mul{0.0000};
        for(int i=a;i<=b;i++)
        {
            mul=sqrt(i);
            num=mul;
            if(mul-num==0)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
