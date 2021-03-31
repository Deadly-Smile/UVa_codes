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
#define swap(a,b,T) T temp{a};    (a) = (b);    (b) = (temp)
#define fileReadWrite freopen("../input.txt", "r", stdin); freopen("../output.txt", "w", stdout)
typedef unsigned char Byte;
typedef long long ll;
typedef unsigned long long ull;
//---------------------------Good luck---------------------------------//

int main() {
    FastIO;
    // fileReadWrite;
    string s;
    while(std::cin >> s){
        if(s[0] == '0') break;
        if(s.length() <= 5) {
            int n{0};
            n = sqrt(std::stoi(s));
            string small = to_string(n);
            forFront(i,1,small.length()){
                small[i] = '0';
            }
            std::cout << small << std::endl;
        }else{
            int n{0};
            if(s.length() % 2 == 1) {
                n = s[0] - '0';
            }else{
                n = (s[0] - '0') * 10;
                n += s[1] - '0';
            }
            n = sqrt(n);
            int zeros{0};
            zeros = ceil(s.length() / 2);
            
            if(s.length() % 2 == 1){
                string small(zeros,'0');
                std::cout << n << small <<std::endl;
            }else{
                string small(zeros-1,'0');
                std::cout << n << small <<std::endl;
            }
        }
    }
    
    return 0;
}
