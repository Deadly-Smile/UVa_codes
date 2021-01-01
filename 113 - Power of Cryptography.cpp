#include<cstdio>
#include<cmath>
int main()
{
    double n{0.0000},k{0.0000};
    while(scanf("%lf\n%lf",&k,&n)!=EOF){
		printf("%.0lf\n",pow(n,1.0/k));
	}
    return 0;
}
