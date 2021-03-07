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
#define swap(a,b,T) T temp{a};    a = b;    b = temp
#define makePair(a,b,T1,T2) std::pair<T1,T2> p(a,b)
typedef unsigned char Byte;
typedef long long ll;
typedef unsigned long long ull;
//---------------------------Good luck---------------------------------//

int main() {
    FastIO;
//     freopen("../input.txt", "r", stdin);
//     freopen("../output.txt", "w", stdout);
    char i;
    Byte number{0};
    while (scanf("%c",&i) != EOF) {
        if(i >= '0' && i <= '9') {
           number += i - '0';
        } else if (i == '!') {
            number = 0;
            std::cout << '\n';
        } else if (i == 'b') {
            forFront(j,0,number) {
                std::cout << ' ';
            }   number = 0;
        } else if (i == '\n') {
            std::cout << i;
        } else {
            forFront(j,0,number) {
                std::cout << i;
            }   number = 0;
        }
    }
    return 0;
}
