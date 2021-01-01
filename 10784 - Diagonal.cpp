#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    double n{0};
    short int count{1};
    while(scanf("%lf",&n)!=EOF){
        if(n==0)
            break;
        n=ceil(3+sqrt((9+8*n)))/2;
        printf("Case %hi: %.0lf\n",count,n);
        count++;
    }
    return 0;
}
