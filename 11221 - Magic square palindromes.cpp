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

string convert(string old) {
    string s;
    forAuto(old) {
        if(i >= 'a' && i <= 'z') {
            s.PB(i);
        }
    }
    return s;
}

string crazyConvert(string old, int &n) {
    string s;
    forFront(i,0,n) {
        forFront(j,0,n) {
            s.PB(old.at((j*n) + i));
        }
    }
    return s;
}

bool isPalindrome(string str) { 
    int l = 0; 
    int h = str.length() - 1;
    while (h > l) {
        if (str[l++] != str[h--]) { 
            return false;
        }
    }
    return true;
} 

void solve (string s) {
    int n{s.length()};
    n = sqrt(s.length());
    if(n*n != s.length()) {
        std::cout << "No magic :(" << std::endl;
    } else {
        if(isPalindrome(s)) {
            string crazyString = crazyConvert(s, n);
            if(isPalindrome(crazyString)) {
                std::cout << n << std::endl;
            } else {
                std::cout << "No magic :(" << std::endl;
            }
        } else {
            std::cout << "No magic :(" << std::endl;
        }
    }
}

int main() {
    FastIO;
    // freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);
    bool isFirst{true};
    int test{0};   cin>>test;  forFront(i,1,test+1) {
        if(isFirst) {
            isFirst = false;
            Ignore;
        }
        string s;
        getline(cin,s);
        std::cout << "Case #" << i << ":" << std::endl;
        solve(convert(s));
    }
    return 0;
}
