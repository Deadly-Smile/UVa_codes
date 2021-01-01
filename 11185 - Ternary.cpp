#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    long long int n;
    while (cin>>n)
    {
        if(n<0)
        {
            break;
        }
        long long int i{1};
        long long int sum{0};
        while (n>0)
        {
            sum+=(n%3)*i;
            n/=3;
            i*=10;
        }
        cout<<sum<<endl;
    }
    return 0;
}
