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

void solve(int n);

int digits(ull n) {
    int d{0};
    while(n != 0) {
        n /= 10;
        d++;
    }
    return d;
}

int main() {
    FastIO;
//     freopen("../input.txt", "r", stdin);
//     freopen("../output.txt", "w", stdout);
    int n{0};
    testCase{
        std::cin >> n;
        solve(n);
    }
    return 0;
}

void solve(int n) {
    int exponential{0};
    ull ans = 1000000000000000000;

    forFront(i,0,n) {
        ans /= 2;
        if(digits(ans) <= 18) {
            ans *= 10;
            exponential++;
        }
    }
    double result = (double)ans / 1000000000000000000;
    ans = ans / pow(10,14);
    if(ans % 10 >= 5) {
        ans /= 10;
        ans++;
        result = (double)ans / 1000;
    }
    
    printf("2^-%d = %.3lfE-%d\n",n,result,exponential);
}
