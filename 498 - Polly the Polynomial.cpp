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
// Just like parse in java
vector<string> split (string s, string delimiter) {
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector<string> res;

    while ((pos_end = s.find (delimiter, pos_start)) != string::npos) {
        token = s.substr (pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back (token);
    }

    res.push_back (s.substr (pos_start));
    return res;
}

std::vector<int> getList(string &s) {
    std::vector<int> record;
    auto strList = split(s, " ");
    for (auto &i : strList) {
        int temp{0};
        stringstream scanner(i);
        scanner >> temp;
        record.push_back(temp);
    }
    return record;
}

long long power(int x1, long long y) { 
    // O(logN)
    if(y == 0)  return 1;
    long long ans{1}, x{x1};
    if(!x)  return 0;
    while (y > 0) {
        if (y & 1) {
            ans *= x;
        }

        y = y >> 1;
        x *= x;
    }
    return ans;
}

ll calculate(std::vector<int> &record, int n) {
    ll sum{0};
    int temp = record.size()-1;
    for (int i = 0; i <= temp; i++) {
        sum += (ll)record[i] * power(n, temp-i);
    }
    return sum;
}

int main() {
    FastIO;

    string s1,s2;
    while(getline(cin, s1)) {
        getline(cin, s2);
        std::vector<int> list1 = getList(s1);
        std::vector<int> list2 = getList(s2);

        // for (auto &i : list1) {
        //     std::cout << i << " ";
        // }   std::cout << std::endl;
        // for (auto &i : list2) {
        //     std::cout << i << " ";
        // }   std::cout << std::endl;

        std::cout << calculate(list1, list2[0]);
        for (int i = 1; i < list2.size(); i++) {
            std::cout << " " << calculate(list1, list2[i]);
        }   std::cout << std::endl;
    }
    
    return 0;
}
