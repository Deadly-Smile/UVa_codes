#include<stdio.h>
int main()
{
    int n{0};
    scanf("%d",&n);
    while(n--)
    {
        long long int sum{0},diff{0},a{0},b{0};
        scanf("%lli %lli",&sum,&diff);
        a=sum+diff;
        b=sum-diff;
        if(a<0||b<0||a%2==1||b%2==1)
        {
            printf("impossible\n");
        }
        else
        {
            printf("%lli %lli\n", a/2, b/2);
        }
    }
    return 0;
}
