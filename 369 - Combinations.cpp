#include<cstdio>
#include<cmath>
int main()
{
    unsigned short int n{0},m{0};
    while(scanf("%hu %hu",&n,&m)!=EOF){
        if(n==0&&m==0)
            break;
        double mul_1{1.00};
        for(short int i=m+1;i<=n;i++)
        {
            mul_1*=i;
        }
        n=n-m;
        for(short int i=1;i<=n;++i){
            mul_1/=i;
        }
        printf("%hu things taken %hu at a time is %.0lf exactly.\n",n+m,m,mul_1);
    }
    return 0;
}
