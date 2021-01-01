#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    int n{0};
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        int arr[101] = {0};
        short int v{0};
        for(int i=1;i<=n;++i) {
            scanf("%hi",&v);
            arr[v]++;
        }
        bool flag{0};
        for(short int i=1;i<=100;i++)
        {
            for(int j=1;j<=arr[i];j++)
            {
                if(!flag)
                {
                    printf("%hi",i);
                }else{
                    printf(" %hi",i);
                }
                flag=1;
            }
        }
        printf("\n");
        
    }
    return 0;
}
