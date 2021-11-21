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
int getInversion(const string &s){
    int count{0};
    for (int i = 0; i < s.length(); i++) {
        for (int j = i+1; j < s.length(); j++) {
            if(s[i] > s[j])
                count++;
        }
    }
    return count;
}

bool compare(pairs &a, pairs &b) {
    if(a.second == b.second)    
        return a.first < b.first;
    return a.second < b.second;
}

int main() {
    FastIO;

    int test{0};   std::cin >> test;
    while(test--) {
        int n{0},m{0};
        std::cin >> n >> m;

        pairs record[m];
        string s[m];
        for (int i = 0; i < m; i++) {
            std::cin >> s[i];
            record[i].first = i;
            record[i].second = getInversion(s[i]);
        }   std::sort(record, record+m, compare);

        for (int i = 0; i < m; i++) {
            std::cout << s[record[i].first] << std::endl;
        }
        if(test)    std::cout << std::endl;
    }
    
    return 0;
}
