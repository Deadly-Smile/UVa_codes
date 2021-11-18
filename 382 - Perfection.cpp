#include<stdio.h>
#include<cmath>
int main()
{
    int num{0};
    printf("PERFECTION OUTPUT\n");
    while (scanf("%d",&num)!=EOF)
    {
        if(num==0)
        {
            break;
        }
        bool flag= false;
        if(num==1)
        {
            flag=true;
        }
        int sum{1};
        for(int i{2};i<sqrt(num);++i)
        {
            if(num%i==0)
            {
                sum+=i;
                sum+=num/i;
            }
        }
        printf("%5d  ", num);
        if(num>sum || flag)
        {
            printf("DEFICIENT\n");

        }else if (num==sum)
        {
            printf("PERFECT\n");
        }else if(num<sum)
        {
            printf("ABUNDANT\n");
        }
    }
    printf("END OF OUTPUT\n");
    return 0;
}
