# UVa_codes
Assignment for 1.2 S.P.L.S-2 
#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{

    int n{0};
    scanf("%d",&n);
    while(n--)
    {
        int a{0},b{0};
        scanf("%lli %lli",&a,&b);
        if(b%a==0)
        {
            printf("%lli %lli\n",a,b);
        } else if (b%a!=0)
        {
            printf("-1\n");
        }

    }

    return 0;
}
