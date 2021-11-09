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
    while(std::cin >> n) {
        if(!n)  break;

        std::set<int> record;
        int count{0};

        std::cout << "Original number was " << n << std::endl;
        while(true) {
            string s = std::to_string(n);
            int bigOne{0},smallOne{0};

            std::sort(s.begin(), s.end(), greater<char>());
            stringstream big(s);
            big >> bigOne;

            std::sort(s.begin(), s.end());
            stringstream small(s);
            small >> smallOne;

            count++;
            n = bigOne - smallOne;

            std::cout << bigOne << " - " << smallOne <<
            " = " << n << std::endl;

            if(record.count(n)) {
                std::cout << "Chain length " << count << std::endl;
                break;
            }   record.insert(n);
            
        }   std::cout << std::endl;
    }    
    return 0;
}
