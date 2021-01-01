#include <iostream>
using namespace std;
int main()
{
    short int num{0};
    while( cin>>num){
        short int n{0},sum[2]{num,num};
        n=num;
        while (n>2)
        {
            sum[0]+=n/3;
            n=n/3+n%3;
        }
        if(n==2){
            n=num+1;
            while (n>2)
            {
                sum[1]+=n/3;
                n=n/3+n%3;
            }
        }
        if(sum[0]>=sum[1])
        {
            cout<<sum[0]<<endl;
        } else {
            cout<<sum[1]<<endl;
        }
    }
    return 0;
}
