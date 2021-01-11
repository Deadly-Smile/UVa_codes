#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    for (int i = 0; i <n; ++i) {
        int a=0;
        cin>>a;
        a*=567;
        a/=9;
        a+=7492;
        a*=235;
        a/=47;
        a-=498;
        a/=10;
        a=a%10;
        if(a<0)
            a*=-1;
        cout<<a<<endl;

    }
    return 0;
}
