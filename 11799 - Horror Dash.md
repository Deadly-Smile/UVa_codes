# UVa_codes
Assignment for 1.2 S.P.L.S-2 
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n{0};
    cin>>n;
    for (int i = 0; i < n; ++i) {
        int x{0},min{0};
        int num{0};
        cin>>num;
        for (int j = 0; j <num ; ++j) {
            scanf("%d",&x);
            if(min<x) {
                min = x;
            }
        }
        printf("Case %d: %d\n",i+1,min);
    }
    return 0;
}
