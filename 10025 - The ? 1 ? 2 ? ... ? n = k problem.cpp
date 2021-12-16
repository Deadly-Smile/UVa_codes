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

    int test{0};    cin >> test;
    while(test--) {
        int n{0};    cin >> n;
        int sum{0},ans{0};

        if(n < 0)   n *= (-1);
        if(!n)      ans = 3;

        for(int i = 0; i <= n && !ans; i++) {
            sum += i;
            if(sum > n) {
                int temp{sum - n};
                if(temp & 1) {
                    if(temp == i+1 || !((temp - (i+1)) & 1)) {
                        ans = i+1;
                    } else {
                        ans = i+2;
                    }
                } else {
                    ans = i;
                }
                break;
            } else if(sum == n) {
                ans = i;
            }
        }
        if(test) cout << ans << "\n" << endl;
        else     cout << ans << endl;
    }

    return 0;
}
