#include<iostream>
using namespace std;
int main()
{
    int a{0},b{0};
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        int count{a};
        while(a>=b)
        {
            count+=(a/b);
            a=(a/b)+(a%b);
        }
        printf("%d\n",count);
    }
    return 0;
}
