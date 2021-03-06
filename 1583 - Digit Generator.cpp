#include <iostream>
using namespace std;
short int digit_counter(int n)
{
    short int count{0};
    while (n>0)
    {
        count++;
        n/=10;
    }
    return count;
}
short int sum_of_digits(int *n, short int *sum)
{
    *sum=0;
    while (*n>0)
    {
        *sum+=*n%10;
        *n/=10;
    }
    return *sum;
}
int main()
{
    int t{0};
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int num{0},match{0};
        cin>>num;
        short int len= digit_counter(num),sum{0};
        bool flag=0;
        match=num-(len*9);
        for (int j = match; j <=num ; ++j) {
            sum=sum_of_digits(&match,&sum);
            if(j+sum-1==num)
            {
                cout<<j-1<<endl;
                flag=1;
                break;
            }
            match=j;
        }
        if(flag==0)
            cout<<flag<<endl;
    }
    return 0;
}
