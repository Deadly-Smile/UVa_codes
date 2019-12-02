# UVa_codes
Assignment for 1.2 S.P.L.S-2 
#include<stdio.h>
int main()
{
    short int n{0},m{0};
    while(scanf("%hi%hi",&n,&m)!=EOF)
    {
        short int count{0};
        for(short int i=n;i<=m;++i)
        {
            short int j{0},arr[] {-1,-2,-3,-4};
            n=i;
            while(n>0)
            {
                arr[j]=n%10;
                n/=10;
                j++;
            }
            if(arr[0]!=arr[1] && arr[0]!=arr[2] && arr[0]!=arr[3] && arr[1]!=arr[2] && arr[1]!=arr[3] && arr[2]!=arr[3])
            {
                count++;
            }
        }
        printf("%hi\n",count);
    }
    return 0;
}
