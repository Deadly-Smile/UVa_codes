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

    int n{0},t{1},temp{0};
    while(std::cin >> n) {
        if(!n)  break;
        int ans{0};
        for (int i = 0; i < n; i++) {
            std::cin >> temp;
            if(temp)    ans++;
            else        ans--;
        }
        std::cout << "Case " << t++ << ": " << ans << std::endl;
    }
    
    return 0;
}
