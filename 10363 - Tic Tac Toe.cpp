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

bool isWin (string s1, string s2, string s3, char c) {
    forFront(i,0,3) {
        if (s1[i] == s2[i] && s1[i] == s3[i] && s1[i] == c) {
            return true;
        }
    }
    if(s1[0] == s1[1] && s1[1] == s1[2] && s1[0] == c){
        return true;
    }
    if(s2[0] == s2[1] && s2[1] == s2[2] && s2[0] == c){
        return true;
    }
    if(s3[0] == s3[1] && s3[1] == s3[2] && s3[0] == c){
        return true;
    }
    if(s1[0] == s2[1] && s1[0] == s3[2] && s1[0] == c){
        return true;
    }
    if(s1[2] == s2[1] && s1[2] == s3[0] && s1[2] == c){
        return true;
    }
    return false;
}

int main() {
    FastIO;
    // freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);
    testCase {
        Ignore;
        string firstLine;   std::cin >> firstLine;
        string secondLine;  std::cin >> secondLine;
        string thirdLine;   std::cin >> thirdLine;

        int numOfX{0},numOfO{0};
        forAuto(firstLine) {
            if(i == 'X') numOfX++;
            else if(i == 'O')   numOfO++;
        }
        forAuto(secondLine) {
            if(i == 'X') numOfX++;
            else if(i == 'O')   numOfO++;
        }
        forAuto(thirdLine) {
            if(i == 'X') numOfX++;
            else if(i == 'O')   numOfO++;
        }

        if(numOfO > numOfX) {
            std::cout << "no" << std::endl;
        } else {
            if(numOfX == numOfO + 1) {
                if(isWin(firstLine,secondLine,thirdLine,'O')) {
                    std::cout << "no" << std::endl;
                } else {
                    std::cout << "yes" << std::endl;
                }
            } else if(numOfO == numOfX) {
                if(isWin(firstLine,secondLine,thirdLine,'X')) {
                    std::cout << "no" << std::endl;
                } else {
                    std::cout << "yes" << std::endl;
                }
            } else {
                std::cout << "no" << std::endl;
            }
        }
    }
    return 0;
}
