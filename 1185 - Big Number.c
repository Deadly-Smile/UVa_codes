#include<stdio.h>
int main()
{
    int n{0};
    scanf("%d",&n);
    while(n--)
    {
        int num{0},backup{0},count{0};
        scanf("%d",&num);
        double mul{1.000};
        for (int i = 1; i <=num ; ++i)
        {
            mul*=i;
            backup=mul;
            while (backup>0)
            {
                backup/=10;
                mul/=10;
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
