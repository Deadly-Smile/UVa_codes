#include<cstdio>
#include<cmath>
int main()
{
    int num{0};
    while(scanf("%d",&num)!=EOF){
        bool flag{1};
        for(int i=2;i<=sqrt(num);++i)
        {
            if(num%i==0)
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            if(num<=11){
                printf("%d is prime.\n",num);
            }else{
                short int digit_count{0},rem{0};
                int backup{num},sum{0};
                while(backup>0){
                    backup/=10;
                    digit_count++;
                }
                backup=num;
                while(digit_count--){
                    rem=backup%10;
                    backup/=10;
                    sum+=rem*pow(10,digit_count);
                }
                if(num==sum){
                    printf("%d is prime.\n",num);
                    continue;
                }
                for(int i=2;i<=sqrt(sum);++i)
                {
                    if(sum%i==0)
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag){
                    printf("%d is emirp.\n",num);
                }else{
                    printf("%d is prime.\n",num);
                }
            }
        }else{
            printf("%d is not prime.\n",num);
        }    
    }
    return 0;
}
