# UVa_codes
Assignment for 1.2 S.P.L.S-2 
Problem:- 11805 - Bafana Bafana
#include<bits/stdc++.h>
int main()
{
    unsigned short int num{0};
    scanf("%hu",&num);
    short int n{0},k{0},p{0};
    for(unsigned short int i=1;i<=num;++i){
        scanf("%hi %hi %hi",&n,&k,&p);
        p=p%n;
        k+=p;
        if(k>n)
            k-=n;
        printf("Case %hi: %hi\n",i,k);
    }
    return 0;
}
