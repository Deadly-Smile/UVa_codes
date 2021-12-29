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

    ll n{0};
    int test{1};
    while(std::cin >> n) {
        std::cout << setw(4) << test++ << ". ";
        if(!n) {
            std::cout << 0 << std::endl;
            continue;
        }

        string s;
        //-------------getting values-------------//
        if(n % 100) {
            string temp = std::to_string(n % 100);
            std::reverse(temp.begin(), temp.end());
            s += temp;
        }
        n /= 100;
        if(n % 10) {
            s += " atahs ";
            string temp = std::to_string(n % 10);
            std::reverse(temp.begin(), temp.end());
            s += temp;
        }
        n /= 10;
        if(n % 100) {
            s += " rajah ";
            string temp = std::to_string(n % 100);
            std::reverse(temp.begin(), temp.end());
            s += temp;
        }
        n /= 100;

        if(n % 100) {
            s += " hkal ";
            string temp = std::to_string(n % 100);
            std::reverse(temp.begin(), temp.end());
            s += temp;
        }
        n /= 100;
        if(n % 100) {
            s += " ituk ";
            string temp = std::to_string(n % 100);
            std::reverse(temp.begin(), temp.end());
            s += temp;
        } else if(n) {
            s += " ituk";
        }
        n /= 100;
        if(n % 10) {
            s += " atahs ";
            string temp = std::to_string(n % 10);
            std::reverse(temp.begin(), temp.end());
            s += temp;
        }
        n /= 10;

        if(n % 100) {
            s += " rajah ";
            string temp = std::to_string(n % 100);
            std::reverse(temp.begin(), temp.end());
            s += temp;
        }
        n /= 100;
        if(n % 100) {
            s += " hkal ";
            string temp = std::to_string(n % 100);
            std::reverse(temp.begin(), temp.end());
            s += temp;
        }
        n /= 100;
        if(n % 100) {
            s += " ituk ";
            string temp = std::to_string(n % 100);
            std::reverse(temp.begin(), temp.end());
            s += temp;
        }
        n /= 100;
        //----------------------------------------//
        std::reverse(s.begin(), s.end());
        if(s.back() == ' ')
            s.erase(s.length() - 1);
        std::cout << s << std::endl;
    }
    
    return 0;
}
