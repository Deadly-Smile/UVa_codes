//----------------------Created by Anik Saha---------------------------//
#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(false);    cin.tie(NULL)
#define Ignore cin.ignore()
#define PF push_front
#define PB push_back
#define testCase int test{0};   cin>>test;  while(test--)
#define forFront(x, y, z) for(int (x) = (y); (x) < (z); (x)++)
#define forBack(x, y, z) for(int (x) = (y); (x) > (z); (x)--)
#define takeN int n{0};   cin>>n
#define swap(a,b,ty) ty temp{a};    a = b;    b = temp
typedef unsigned char Byte;
typedef long long ll;
typedef unsigned long long ull;
//---------------------------Good luck---------------------------------//

int main()
{
    FastIO;
    int n{0};
    std::vector<int> diff(992,0);
    diff[0] = 0;
    diff[1] = 2;
    diff[2] = 3;
    diff[3] = 5;
    diff[4] = 5;
    diff[5] = 7;
    diff[6] = 7;
    forFront(i,7,10){
        diff[i] = 0;
    }
    diff[10] = 11;
    diff[11] = 13;
    diff[12] = 13;
    forFront(i,13,17){
        diff[i] = 17;
    }
    forFront(i,17,31)   diff[i] = 31;
    forFront(i,31,37)   diff[i] = 37;
    forFront(i,37,71)   diff[i] = 71;
    diff[71] = 73;
    diff[72] = 73;
    forFront(i,73,79)   diff[i] = 79;
    forFront(i,79,97)   diff[i] = 97;
    diff[97] = 0;
    diff[98] = 0;
    diff[99] = 0;
    forFront(i,100,113)   diff[i] = 113;
    forFront(i,113,131)   diff[i] = 131;
    forFront(i,131,199)   diff[i] = 199;
    forFront(i,199,311)   diff[i] = 311;
    forFront(i,311,337)   diff[i] = 337;
    forFront(i,337,373)   diff[i] = 373;
    forFront(i,373,733)   diff[i] = 733;
    forFront(i,733,919)   diff[i] = 919;
    forFront(i,919,991)   diff[i] = 991;


    while(scanf("%d",&n) != EOF){
        if(n == 0)  break;
        if(n >= 992){
            std::cout << "0" << std::endl;
            continue;
        }
        std::cout << diff[n] << std::endl;
    }
    return 0;
}
