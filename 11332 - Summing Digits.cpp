#include <iostream>
#include <string>

using namespace std;
int main()
{
    unsigned int n;
    while (cin>>n)
    {
        if(n==0)
        {
            break;
        }
        int sum{0};
        aga:
        while (n>0)
        {
            sum+=n%10;
            n/=10;
        }
        if(sum>9)
        {
            n=sum;
            sum=0;
            goto aga;
        }
        cout<<sum<<endl;
    }
    return 0;
}
