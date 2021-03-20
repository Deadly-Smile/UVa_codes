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

std::pair<string,int> calculate(int n, int m, string companyName, int A, int B) {
    int cost{0};
    while(n > m) {
        if(n/2 >= m && B < (n-(n/2)) * A){
            n = n/2;
            cost += B;
        }else{
            n--;
            cost += A;
        }
    }
    return std::pair<string,int>(companyName,cost);
}

bool compare(std::pair<string,int> a, std::pair<string,int> b) {
    if(a.second == b.second) {
        forFront(i,0,min(a.first.length(),b.first.length())) {
            if(a.first.at(i) < b.first.at(i)){
                return true;
            } else if(a.first.at(i) == b.first.at(i)){
                continue;
            } else {
                return false;
            }
        }
        return false;
    }
    return a.second < b.second;
}

int main() {
    FastIO;
//     freopen("../input.txt", "r", stdin);
//     freopen("../output.txt", "w", stdout);
    int test{0};   cin>>test;
    forFront(t,1,test+1) {
        int n{0},m{0},l{0};
        std::cin >> n >> m >> l;
        std::vector<std::pair<string,int>> companyCost;

        forFront(i,0,l) {
            string s,companyName,A,B;
            Ignore; std::cin >> s;
            int j{0};
            while(s[j] != ':') {
                companyName.PB(s[j]);
                j++;
            }   j++;
            while (s[j] != ',') {
                A.PB(s[j]);
                j++;
            }   j++;
            while (s[j] != 0) {
                B.PB(s[j]);
                j++;
            }
            companyCost.PB(calculate(n,m,companyName,stoi(A),stoi(B)));
        }
        std::sort(companyCost.begin(),companyCost.end(),compare);
        std::cout << "Case " << t << std::endl;
        forAuto(companyCost) {
            std::cout << i.first << " " << i.second << std::endl;
        }

    }
    return 0;
}
