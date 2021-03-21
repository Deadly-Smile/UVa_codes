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
    int n{0};
    while(std::cin >> n) {
        if(!n)  break;
        std::set<std::pair<int,int>> file;
        int first{0},second{0};
        forFront(i,0,n) {
            std::cin >> first >> second;
            pair<int,int> p1(first,second);
            pair<int,int> p2(second,first);
            
            if(file.count(p1)) {
                file.erase(p1);
            }else if(file.count(p2)){
                file.erase(p2);
            }else{
                file.insert(p1);
            }
        }
        if(file.size() == 0) {
            std::cout << "YES" << std::endl;
        }else{
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}
