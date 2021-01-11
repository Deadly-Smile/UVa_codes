#include <stdio.h>

int main()
{
    int num=500;
    int i=0,d=0;
    for(i=937500;num<=1500;i++)
    {
        d=i;
        if(i%2==0||i%3==0||i%5==0)
        {
            while(d%2!=1)
            {
                d=d/2;
            }
            while(d%3==0)
            {
                d/=3;
            }
            while(d%5==0)
            {
                d/=5;
            }
            if(d==1)
            {
                num++;
            }
        }
    }
    printf("The 1500'th ugly number is %d.\n",i-1);   
    
    return 0;
}
