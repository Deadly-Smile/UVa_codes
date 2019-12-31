# UVa_codes
Assignment for 1.2 S.P.L.S-2 
#include<cstdio>
#include<cmath>
int main()
{
    long long int num{0};
    while(scanf("%lli",&num)!=EOF){
        if(num==0)
            break;
        char store[50];
        short int i{0};
        for(    ; num>0; i++){
            store[i]=num%2;
            num/=2;
        }
        num=0;
        printf("The parity of ");
        while(i--){
            printf("%d",store[i]);
            if(store[i]==1)
            {
                num++;
            }
        }
        printf(" is %d (mod 2).\n",num);
    }
    return 0;
}
