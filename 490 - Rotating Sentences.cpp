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
    // freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);
    std::vector<string> s;
    string proxy;
    while(getline(cin,proxy)) {
        s.PB(proxy);
    }
    int maxValue{0};
    forFront(i,0,s.size()) {
        if(maxValue < s[i].length()) {
            maxValue = s[i].length();
        }
    }
    
    forFront(i,0,maxValue) {
        forBack(j,s.size()-1,-1) {
            if(s.at(j).length() <= i) {
                std::cout << " ";
                continue;
            } else {
                std::cout << s.at(j).at(i);
            }
        }
        std::cout << std::endl;
    }
    
    return 0;
}
