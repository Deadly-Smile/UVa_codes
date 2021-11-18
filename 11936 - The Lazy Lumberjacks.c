#include<stdio.h>
int main()
{
    int n{0};
    scanf("%d",&n);
    while(n--)
    {
        int a{0},b{0},c{0};
        scanf("%d %d %d",&a,&b,&c);
        if(a+b>c && a+c>b && b+c>a)
        {
            printf("OK\n");
        }else{
            printf("Wrong!!\n");
        }
    }
    return 0;
}
