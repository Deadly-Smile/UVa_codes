#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    for (int i = 0; i <n ; ++i) {
        int a,b;
        cin>>a;
        cin>>b;
        if(a>b)
        {
            cout<<">"<<endl;
        }else if(b>a)
        {
            cout<<"<"<<endl;
        }else if(a==b)
        {
            cout<<"="<<endl;
        }
    }
    return 0;
}
