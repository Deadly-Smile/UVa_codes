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
#define forAuto(x)  for(auto i : (x))
#define takeN int n{0};   cin>>n
#define swap(a,b,ty) ty temp{a};    a = b;    b = temp
typedef unsigned char Byte;
typedef long long ll;
typedef unsigned long long ull;
template<typename T>
void inputArray(T arr[], int &n){
    for(int i = 0; i < n; i++){          // inputting array
        cin>>arr[i];
    }
}
//---------------------------Good luck---------------------------------//

int main()
{
    FastIO;
    testCase{
        int a{0},b{0},z{0};
        std::cin >> a >> b >> z;
        double temp = (double )(a+b)/3;
        double x =(double ) z / ((a - temp) + (b - temp));
        x *= a - temp;
        
        int m = x;
        if(x-m >= .9)   m++;
        if(m < 0){
            std::cout << '0' << std::endl;
            continue;
        }
        std::cout << m << std::endl;
    }
    return 0;
}
