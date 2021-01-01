#include<iostream>
#include<stdio.h>
#include<string.h>
#include<cmath>
bool is_prime(short int *num)
{
    for(short int i=2;i<=sqrt(*num);++i)
    {
        if(*num%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char s[22];
    while(scanf("%s",s)!=EOF)
    {
        short int sum{0},len=strlen(s);
        for(short i=0;i<len;i++)
        {
            if(s[i]>=64&&s[i]<=90)
            {
                sum+=s[i]-64+26;
            }
            else if(s[i]>=97&&s[i]<=122)
            {
                sum+=s[i]-96;
            }
        }
        bool flag=is_prime(&sum);
        if(flag==true)
        {
            printf("It is a prime word.\n");
        }else{
            printf("It is not a prime word.\n");
        }
    }
    return 0;
}
