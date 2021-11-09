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
bool compare (char a, char b) {
    bool isA{true},isB{true};

    if (a >= 'A' && a <= 'Z') isA = false;
    if (b >= 'A' && b <= 'Z') isB = false;

    if (isA && isB)     return a < b;
    if (!isA && !isB)   return a < b;

    if (isA) {
        a -= 'a'-'A';
        return a < b;
    } else {
        b -= 'a'-'A';
        return a <= b;
    }
}


int main() {
    FastIO;

    int test{0};   std::cin >> test;
    while(test--) {
        string s;   Ignore;
        std::cin >> s;
        std::sort(s.begin(), s.end(), compare);

        do {
            std::cout << s << std::endl;
        } while (std::next_permutation(s.begin(), s.end(), compare));
    }
    
    return 0;
}

/*
Idea from : http://www.algorithmist.com/index.php/UVa_195
*/
