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

    int n{0};   std::cin >> n;
    map<string, int> record;

    Ignore;
    for (int i = 0; i < n; i++) {
        string s;   std::cin >> s;

        auto it = record.find(s);
        if(it == record.end())
            record.insert({s, 1});
        else  
            record.at(s)++;

        getline(cin, s);
    }    

    for (auto &i : record) {
        std::cout << i.first << " " << i.second << std::endl;
    }
    return 0;
}
