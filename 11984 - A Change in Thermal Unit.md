# UVa_codes
Assignment for 1.2 S.P.L.S-2 
Problem:- 11984 - A Change in Thermal Unit
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    unsigned short int n{0};
    scanf("%hu",&n);
    float Celsius{0.00},Fahrenheit{0.00};
    for(short int i=1;i<=n;++i){
        scanf("%f %f",&Celsius,&Fahrenheit);
        Celsius+=(float)Fahrenheit*.55555555556;
        printf("Case %hi: %.2f\n",i,Celsius);
    }
    return 0;
}
