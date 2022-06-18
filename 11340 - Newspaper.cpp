//----------------------Created by Anik Saha---------------------------//
#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(false);    cin.tie(NULL)
#define Ignore cin.ignore()
typedef unsigned char Byte;
typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> pairs;
typedef std::vector<int> VI;
typedef std::vector<pairs> VII;
//---------------------------Good luck---------------------------------//


int main() {
    FastIO;

    int test{0};   std::cin >> test;
    while(test--) {
        int n{0};   std::cin >> n;
        std::map<char, int> table;
        for (int i = 0; i < n; i++) {
            char c; Ignore;
            std::cin >> c;
            int temp{0};
            std::cin >> temp;
            table.insert({c, temp});
        }
        int m{0};
        std::cin >> m;
        Ignore;
        ll sum{0};
        for (int i = 0; i < m; i++) {
            string s;
            getline(cin, s);
            for (auto &i : s) {
                auto it = table.find(i);
                if(it != table.end())   sum += table.at(i);
            }
        }
        printf("%.2lf$\n", (double)sum/100);
    }
    
    return 0;
}
