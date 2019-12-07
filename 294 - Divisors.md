# UVa_codes
Assignment for 1.2 S.P.L.S-2 
#include<stdio.h>
#include <cmath>
int main()
{
    int n{0};
    scanf("%d",&n);
    while(n--)
    {
        int u{0},l{0},index{0};
        scanf("%d %d",&u,&l);
        if(l<u)
        {
           l+=u;
           u=l-u;
           l-=u;
        }
        short int arr{0},max{0};
        for (int i = u; i <=l ; ++i) {
            for (int j = 1; j <=sqrt(i) ; ++j) {
                if(i%j==0)
                {
                    if(i/j==j)
                    {
                        arr++;
                    }else
                    {
                        arr+=2;
                    }
                }
            }
            if(arr>max)
            {
                max=arr;
                index=i;
            }
            arr=0;
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n",u,l,index,max);

    }
    return 0;
}
