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

    int n{0};
    VI record;
    while(std::cin >> n) {
        record.push_back(n);
        for(int i = 0; i < record.size(); i++) {
            if(record[i] > n) 
                std::swap(record[i], record[record.size() - 1]);
        }
        if(record.size() & 1) {
            std::cout << record[record.size()/2] << std::endl;
        } else {
            int temp = ((ll)record[record.size()/2] + 
                        record[record.size()/2 - 1]) / 2;
            std::cout << temp << std::endl;
        }
    }
    
    return 0;
}
