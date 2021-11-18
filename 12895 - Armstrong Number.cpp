#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{

    int n{0};
    scanf("%d",&n);
    while(n--)
    {
        long long int num{0},b{0};
        scanf("%lli",&num);
        unsigned int arr[] {0,0,0,0,0,0,0,0,0,0};
        b=num;
        short int i{0};
        for( ;b>0;++i)
        {
            arr[i]=b%10;
            b/=10;
        }
        b=1;
        for(i=1;(pow(arr[0],i)+pow(arr[1],i)+pow(arr[2],i)+pow(arr[3],i)+pow(arr[4],i)+pow(arr[5],i)+pow(arr[6],i)+pow(arr[7],i)+pow(arr[8],i)+pow(arr[9],i))<=num;i++)
        {
            if((pow(arr[0],i)+pow(arr[1],i)+pow(arr[2],i)+pow(arr[3],i)+pow(arr[4],i)+pow(arr[5],i)+pow(arr[6],i)+pow(arr[7],i)+pow(arr[8],i)+pow(arr[9],i))==num)
               {
                   printf("Armstrong\n");
                   b=0;
                   break;
               }
        }
        if(b==1)
        {
            printf("Not Armstrong\n");
        }
    }

    return 0;
}
