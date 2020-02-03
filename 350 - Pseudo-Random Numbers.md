# UVa_codes
Assignment for 1.2 S.P.L.S-2 
Problem- 350 - Pseudo-Random Numbers
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int Z{0},M{0},L{0},I{0},o{1};
    while(scanf("%d %d %d %d",&Z,&I,&M,&L)!=EOF){
        if(M==0 && L==0 && I==0 && Z==0){
            break;
        }
        int arr [10000] ={0};
        int count{0};
        while(arr[L]!=2){
            L=(Z*L+I)%M;
            if(arr[L]==1){
                break;
            }else{
                arr[L]++;
                count++;
            }
        }
        std::cout << "Case " <<o<<": "<<count<< std::endl;
        o++;
    }
    return 0;
}
