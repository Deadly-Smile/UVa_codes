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

void solve(string s) {
    string sub;
    forFront(i,0,s.length()){
        int j = 0;
        if(sub.length() == 0) {
            sub.PB(s.at(i));
        }
        else{
            bool isOk{true};
            int similar{0};
            for ( j = 0; j < sub.length(); ++j) {
                if(s[i+j] != sub[j]) {
                    isOk = false;
                    if(similar != 0){
                        sub = s.substr(0,i+j+1 - similar);
                    } else {
                        sub = s.substr(0,i+j+1);
                    }
                    break;
                }else {
                    similar++;
                }
            }
            if(isOk) {
                i = i+j - 1;
            }
        }
    }
    std::cout << s.length()/sub.length() << std::endl;
}


int main() {
    FastIO;
//     freopen("../input.txt", "r", stdin);
//     freopen("../output.txt", "w", stdout);
    string s;
    while(std::cin >> s) {
        if(s[0] == '.') break;
        solve(s);
    }
    return 0;
}
