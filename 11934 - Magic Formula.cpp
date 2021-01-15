#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{
    short int a{0},b{0},c{0},l{0};
    int d{0};
    while(scanf("%hi %hi %hi %d %hi",&a,&b,&c,&d,&l)!=EOF)
    {
        if(a==0 && b==0 && c==0 && d==0 && l==0)
        {
            break;
        }
        int count{0};
        for(short int i=0;i<=l;++i)
        {
            if((a*i*i+b*i+c)%d==0)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }

    return 0;
}
