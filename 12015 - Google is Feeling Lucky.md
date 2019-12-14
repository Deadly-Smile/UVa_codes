# UVa_codes
Assignment for 1.2 S.P.L.S-2 
#include<cstdio>
#include<cmath>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    short int n{0};
    scanf("%hi",&n);
    for(short int i=1;i<=n;i++)
    {
        string proxy[10];
        printf("Case #%hi:\n",i);
        short int max{0},proxy1[10];
        for(short int k=0;k<10;++k)
        {
            cin>>proxy[k]>>proxy1[k];
            if(max<proxy1[k])
            {
                max=proxy1[k];
            }
        }
        for(short int k=0;k<10;++k)
        {
            if(proxy1[k]==max)
            {
                cout<<proxy[k]<<endl;
            }
        }
    }
    return 0;
}
