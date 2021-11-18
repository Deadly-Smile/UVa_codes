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

    int r{0},c{0},type{0};
    while(std::cin >> r >> c >> type && (r || c || type)) {
        if(type) 
            std::cout << ((r-7) * (c-7) + 1)/2 << std::endl;
        else
            std::cout << ((r-7) * (c-7)) / 2   << std::endl;
    }
    
    return 0;
}
