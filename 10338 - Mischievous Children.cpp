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
    takeN;
    forFront(t,1,n+1){
        Ignore;
        char arr[26] = {0};
        string s;   std::cin >> s;
        ull mul{1};
        for(auto i : s){
            arr[i-'A']++;
        }
        forFront(i,2,s.length()+1){
            mul *= i;
        }
        forFront(i,0,26){
            if(arr[i] > 1){
                ull divider{1};
                forFront(j,2,arr[i]+1){
                    divider *= j;
                }
                mul /= divider;
            }
        }
        std::cout << "Data set " << t << ": " << mul << std::endl;
    }
    return 0;
}
