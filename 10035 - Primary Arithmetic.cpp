#include<stdio.h>
#include <iostream>
using namespace std;
int main()
{
    long long int a{0},b{0};
    while(scanf("%lli %lli",&a,&b)!=EOF)
    {
        if(a==0&&b==0)
        {
            break;
        }
        short int count{0},carry{0};
        while(a!=0&&b!=0)
        {
            if(a%10+b%10+carry>9)
            {
                count++;
                carry=1;
            }else{
                carry=0;
            }
            a/=10;
            b/=10;
        }
        if(count==0)
        {
            printf("No carry operation.\n");
        }else if(count==1){
            printf("%hi carry operation.\n",count);
        }else if(count>1){
            printf("%hi carry operations.\n",count);
        }
    }
    return 0;
}
