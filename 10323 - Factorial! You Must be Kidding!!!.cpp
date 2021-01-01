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
    while(scanf("%d",&n) != EOF){
        if(n < 0){
            n *= -1;
            if(n % 2 == 0){
                std::cout << "Underflow!" << std::endl;
                continue;
            }
            else{
                std::cout << "Overflow!" << std::endl;
                continue;
            }
        }
        ull mul{1};
        for(int i = 1; i <= n; i++){
            mul *= i;
            if(mul > 6227020800){
                std::cout << "Overflow!" << std::endl;
                goto end;
            }
        }
        if(mul < 10000){
            std::cout << "Underflow!" << std::endl;
        }
        else    std::cout << mul << std::endl;
        end:    ;
    }
    return 0;
}
