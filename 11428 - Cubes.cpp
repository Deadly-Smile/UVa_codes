#include <iostream>
#include <string>
#include <cmath>
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
        for (int y = 1; y <pow(n,.5) ; ++y) {
            for (int x = y+1; x <pow(n,.5) ; ++x) {
                if(n==pow(x,3)-pow(y,3))
                {
                    cout<<x<<" "<<y<<endl;
                    goto end;
                }
            }
        }
        cout<<"No solution"<<endl;
        end:
        ;
    }
    return 0;
}
