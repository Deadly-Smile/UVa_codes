# UVa_codes
Assignment for 1.2 S.P.L.S-2 
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    short int num{0};
    scanf("%hi",&num);
    for(short int i=0;i<num;++i)
    {
        short int n{0},x{0},ava{0};
        scanf("%hi",&n);
        for(short int j=0;j<n;++j)
        {
            scanf("%hi",&x);
            if(j==(n-1)/2)
            {
                ava=x;
            }
        }
        printf("Case %hi: %hi\n",i+1,ava);
    }
    return 0;
}
