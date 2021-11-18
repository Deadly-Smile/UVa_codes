#include<stdio.h>
int main()
{
    int n{0};
    scanf("%d",&n);
    while(n--)
    {
        unsigned long long int num{0};
        scanf("%llu",&num);
        num/=2;
        printf("%llu\n",num);
    }
    return 0;
}
