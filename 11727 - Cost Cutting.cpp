#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    for (int i = 0; i <n; ++i) {
        int a=0,b=0,c=0;
        cin>>a;
        cin>>b;
        cin>>c;
        if(a>b&&a>c)
        {
            a=0;
            if(b>c)
            {
                cout<<"Case "<<i+1<<": "<<b<<endl;
            } else if(c>b){
                cout<<"Case "<<i+1<<": "<<c<<endl;
            }
        } else if(b>a&&b>c)
        {
            b=0;
            if(a>c)
            {
                cout<<"Case "<<i+1<<": "<<a<<endl;
            } else if(c>a){
                cout<<"Case "<<i+1<<": "<<c<<endl;
            }
        } else if(c>b&&c>a)
        {
            c=0;
            if(a>b)
            {
                cout<<"Case "<<i+1<<": "<<a<<endl;
            } else if(b>a){
                cout<<"Case "<<i+1<<": "<<b<<endl;
            }
        }


    }
    return 0;
}
