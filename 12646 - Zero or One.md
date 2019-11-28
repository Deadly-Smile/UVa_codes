# UVa_codes
Assignment for 1.2 S.P.L.S-2 
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    short int a{0},b{0},c{0};
    while (scanf("%hi %hi %hi",&a,&b,&c)!=EOF)
    {
        if(a==b&&c!=a)
            cout<<"C"<<endl;
        else if (a==c&&b!=a)
            cout<<"B"<<endl;
        else if (b==c&&a!=b)
            cout<<"A"<<endl;
        else
            cout<<"*"<<endl;
    }

    return 0;
}
