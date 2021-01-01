#include<cstdio>
#include<cmath>
int main()
{
    short int n{0};
    scanf("%hi",&n);
    while(n--)
    {
        long long int num{0};
        scanf("%lli",&num);
        short int cicle{0};
        while(1)
        {
            long long int backup{num},sum{0};
            short int count{0};
            while(backup>0){
               count++;
               backup/=10;
            }
            backup=num;
            while(count--)
            {
                sum+=(backup%10)*pow(10,count);
                backup/=10;
            }
            if(sum==num)
            {
                break;
            }else if(num!=sum)
            {
                num+=sum;
                sum=0;
                cicle++;
            }
        }
        printf("%hi %lli\n",cicle,num);
    }
    return 0;
}
