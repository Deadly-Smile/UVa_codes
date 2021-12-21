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

bool compare(const pairs &a, const pairs &b) {
    if(a.first == b.first) 
        return a.second > b.second;
    return a.first < b.first;
}

int main() {
    FastIO;

    bool isFirst{true};
    string s;
    while (getline(cin, s)) {
        std::map<int, int> record;
        for(auto i : s) {
            auto it = record.find(i);
            if(it == record.end()) {
                record.insert({i, 1});
            } else {
                record.at(i)++;
            }
        }

        VII list;
        for(auto i : record) {
            list.push_back({i.second, i.first});
        }   sort(list.begin(),list.end(), compare);

        if(isFirst) isFirst = false;
        else        cout << endl;
        for(auto i : list) {
            cout << i.second << " " << i.first << endl;
        }
    }

    return 0;
}
