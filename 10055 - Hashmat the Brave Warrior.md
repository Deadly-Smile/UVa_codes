# UVa_codes
Assignment for 1.2 S.P.L.S-2 
#include <stdio.h>

int main()
{
    long long int a, b;
    while(scanf("%lld %lld", &a, &b) != EOF)
    {
        if(a > b)
            printf("%lld\n", a - b);
        else
            printf("%lld\n", b - a);
    }
    return 0;
}
