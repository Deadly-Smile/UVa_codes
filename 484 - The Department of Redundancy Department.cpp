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

    std::map<int, int> record;
    VI order;
    int n{0};
    while(std::cin >> n) {
        auto it = record.find(n);
        if(it == record.end()) {
            record.insert({n,1});
            order.push_back(n);
        } else {
            record.at(n)++;
        }
    }

    for (const auto &i : order) {
        std::cout << i << " " << record.at(i) << std::endl;
    }
    
    return 0;
}
