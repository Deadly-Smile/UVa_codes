#include <stdio.h>

int main()
{
    unsigned int a,b,ma,mi;
	while(scanf("%u%u",&a,&b)==2)
    {
        ma=a;
        mi=b;
        if(a>b)
        {
            b=a+b;
            a=b-a;
            b=b-a;
        }
        unsigned int i,count=1,max=0,n;
        for(i=a;i<=b;i++)
        {
            n=i;
            while(n!=1)
            {
                if(n%2==1)
                {
                    n=3*n+1;
                }
                else{
                    n/=2;
                }
                count++;
            }
            if(max<count)
            {
                max=count;
            }
            count=1;
        }
        printf("%u %u %u\n",ma,mi,max);
    }
	return 0;
}
