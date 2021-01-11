#include<iostream>
using namespace std;
int main()
{
    short int t{0};
    cin>>t;
    for(short int i=0;i<t;i++)
    {
        short int e=0,f=0,c=0,m=0;
        int count{0};
        cin>>e>>f>>c;
        m=e+f;
        while(m>=c)
        {
            count+=m/c;
            m=(m%c)+(m/c);
        }
        cout<<count<<endl;

    }
    return 0;
}
