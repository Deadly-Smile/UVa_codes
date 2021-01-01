#include<stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    short int n{0};
    scanf("%hi",&n);
    for(short int i=1;i<=n;i++)
    {
        int a{0},b{0},c{0},d{0},f{0},g{0},num{0};
        scanf("%d/%d/%d", &a, &b, &c);
        scanf("%d/%d/%d", &d, &f, &g);
        num = c-g;
        if(b<f)
        {
            num--;
        }
        else if(b==f&&a<d)
        {
            num--;
        }
        if(num<0)
        {
            printf("Case #%hi: Invalid birth date\n",i);
        }else if(num>130)
        {
            printf("Case #%hi: Check birth date\n",i);
        }else{
            printf("Case #%hi: %d\n",i,num);
        }
    }
    return 0;
}
