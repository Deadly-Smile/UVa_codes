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
#define fileReadWrite freopen("../input.txt", "r", stdin); freopen("../output.txt", "w", stdout)
typedef unsigned char Byte;
typedef long long ll;
typedef unsigned long long ull;
//---------------------------Good luck---------------------------------//

ull factorial(int n){
    ull mul{1};
    while(n--){
        mul *= n+1;
    }
    return mul;
}

void delet(string &s, int &n){
    forFront(i,n,s.length()-1){
        s[i] = s[i+1];
    }
    s[s.length() - 1] = 0;
}

int main() {
    FastIO;
    // fileReadWrite;
    testCase {
        Ignore;
        string s,ans;   std::cin >> s;
        ull n{0};   std::cin >> n;
        std::sort(s.begin(),s.end());

        int len{static_cast<int>(s.length())};
        n = n % factorial(len);

        while(len--){
            ull factor{factorial(len)};
            int index{static_cast<int>(n / factor)};
            n = n % factor;
            ans.PB(s.at(index));
            delet(s,index);
            // s.erase(index,index);
        }
        std::cout << ans << std::endl;
    }
    return 0;
}
