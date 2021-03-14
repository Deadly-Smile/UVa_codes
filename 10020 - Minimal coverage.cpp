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
    testCase {
        int m{0};   std::cin >> m;
        std::set<std::pair<int, int>> pairList;
        while(true) {
            int first{0},second{0};
            std::cin >> first >> second;
            if(first == 0 && second == 0)   break;
            pairList.insert(pair<int,int>(first,second));
        }
        bool isOk{true};
        int count{0},location{0};
        std::vector<std::pair<int, int>> path;
        while(location < m) {
            pair<int, int> maxP(0,0);
            int maxLocation{0};
            forAuto(pairList) {
                if(i.first <= location && maxLocation < i.second) {
                    maxLocation = i.second;
                    maxP.first = i.first;
                    maxP.second = i.second;
                }
            }
            if(maxP.first == 0 && maxP.second == 0) {
                isOk = false;
                break;
            }
            path.PB(pair<int,int>(maxP.first,maxP.second));
            pairList.erase(maxP);
            location = maxP.second;
            count++;
        }
        if(!isOk) {
            cout << "0\n" << endl;
        } else {
            std::cout << count << std::endl;
            forAuto(path) {
                std::cout << i.first << " " << i.second << std::endl;
            }
            if(test != 0) {
                cout << "\n";
            }
        }

    }
    return 0;
}
