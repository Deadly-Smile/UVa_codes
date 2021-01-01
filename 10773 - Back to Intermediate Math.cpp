#include<cstdio>
#include<cmath>
int main()
{
    unsigned short int n{0};
    scanf("%hu",&n);
    for(unsigned short int i=1;i<=n;++i)
    {
        short int v{0},u{0},d{0};
        scanf("%hi %hi %hi",&d,&v,&u);
        if(v>=u || u==0 || v==0)
        {
            printf("Case %hi: can't determine\n",i);
            continue;
        }
        double t{0.000};
        t=(double)d/(sqrt(u*u-v*v));
        t-=(double)d/u;
        printf("Case %hu: %.3lf\n",i,t);
    }
    return 0;
}
