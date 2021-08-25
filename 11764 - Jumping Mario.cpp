//----------------------Created by Anik Saha---------------------------//
#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(false);    cin.tie(NULL)
#define Ignore cin.ignore()
#define PF push_front
#define PB push_back
#define MP make_pair
typedef unsigned char Byte;
typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> pairs;
//---------------------------Good luck---------------------------------//

int main() {
    FastIO;

    int t{1};
    int test{0};   std::cin >> test;
    while(test--) {
        int n{0},temp{0},pre{0};   std::cin >> n;
        pairs ans{0,0};

        if(n)   std::cin >> pre;
        for (int i = 1; i < n; i++) {
            std::cin >> temp;
            if(temp > pre) 
                ans.first++;
            if(temp < pre)
                ans.second++;
            pre = temp;
        }
        std::cout << "Case " << t++ << ": " << ans.first << " " 
        << ans.second << std::endl;
    }
    
    return 0;
}
