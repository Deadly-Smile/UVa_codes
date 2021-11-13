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
string findSum(string str1, string str2) {
    if (str1.length() > str2.length()) {
        std::swap(str1, str2);
    }

    string str = "";
    int n1 = str1.length(), n2 = str2.length();
    std::reverse(str1.begin(), str1.end());
    std::reverse(str2.begin(), str2.end());
 
    int carry = 0;
    for (int i = 0; i < n1; i++) {
        int sum = ((str1[i]-'0') + (str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }

    for (int i = n1; i < n2; i++) {
        int sum = (str2[i]-'0')+carry;
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }

    if (carry) str.push_back(carry + '0');
    reverse(str.begin(), str.end());
 
    return str;
}

int main() {
    FastIO;

    std::vector<string> record;
    string s;
    while(std::cin >> s) {
        if(s == "0") {
            string sum = "0";
            for (auto &i : record) {
                sum = findSum(sum, i);
            }
            std::cout << sum << std::endl;
            break;
        }
        record.push_back(s);
    }
    
    return 0;
}
