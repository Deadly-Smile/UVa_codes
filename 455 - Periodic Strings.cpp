//----------------------Created by Anik Saha---------------------------//
#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(false);    cin.tie(NULL)
#define FileOperation   std::ifstream fin("../input.txt"); std::ofstream fout("../output.txt")
#define closeFiles fout.close();    fin.close()
#define Ignore cin.ignore()
#define FIgnore fin.ignore()
#define PF push_front
#define PB push_back
#define testCase int test{0};   cin>>test;  while(test--)
#define ftestCase int ftest{0};   fin>>ftest;  while(ftest--)
#define forFront(x, y, z) for(int (x) = (y); (x) < (z); (x)++)
#define forBack(x, y, z) for(int (x) = (y); (x) > (z); (x)--)
#define forAuto(x)  for(auto i : (x))
#define takeN int n{0};   cin>>n
#define swap(a,b,ty) ty temp{a};    a = b;    b = temp
typedef unsigned char Byte;
typedef long long ll;
typedef unsigned long long ull;
template<typename T>
void inputArray(T arr[], int &n){
    for(int i = 0; i < n; i++){          // inputting array
        cin>>arr[i];
    }
}
//---------------------------Good luck---------------------------------//

int main() {
    FastIO;
    testCase {
        Ignore;
        string s;
        std::cin >> s;
        std::vector<char> sub;
        sub.PB(s.at(0));
        int ans{0};
        if(s.length() == 1){
            ans = 1;
            goto end;
        }
        forFront(i, 1, s.length()) {
            bool isOk{true};
            int j = 0,temp{i};
            for (; j < sub.size() && i < s.length(); j++) {
                if (s[i] != sub[j]) {
                    isOk = false;
                    break;
                }
                i++;
            }
            if (i == s.length() && j < sub.size()) {
                ans = s.length();
                goto end;
            }
            if (!isOk) {
                if(i - temp > 0){
                    i = temp;
                }
                sub.erase(sub.begin(), sub.end());
                for (int k{0}; k <= i && k < s.length(); k++) {
                    sub.PB(s[k]);
                }
            } else {
                i--;
            }
            ans = sub.size();
        }
        end:
        if (test == 0)
            std::cout << ans << std::endl;
        else
            std::cout << ans << "\n" << std::endl;

    }
    return 0;
}
