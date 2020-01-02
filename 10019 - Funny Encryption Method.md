# UVa_codes
Assignment for 1.2 S.P.L.S-2 
#include<cstdio>
#include<cmath>
int main()
{
    unsigned short int n{0};
    scanf("%hu",&n);
    while(n--)
    {
        int num{0},backup{0};
        scanf("%d",&num);
        backup=num;
        int decimal{0},hex{0},hex_decimal{0};
        while(backup>0){
            hex_decimal+=(backup%10)*pow(16,hex);
            hex++;
            backup/=10;
        }
        hex=0;
        backup=num;
        while(backup>0||hex_decimal>0)
        {
            if(backup){
                decimal+=backup%2;
                backup/=2;
            }
            if(hex_decimal)
            {
                hex+=hex_decimal%2;
                hex_decimal/=2;
            }
        }
        printf("%d %d\n",decimal,hex);
    }    
    return 0;
}
