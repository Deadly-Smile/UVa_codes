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

    ll firstList[11] = {1,6};
    ll secondList[11] = {0,8};

    for (int i = 2; i < 11; i++) {
        firstList[i] = (6 * firstList[i-1]) - firstList[i-2];
    }

    for (int i = 2; i < 11; i++) {
        secondList[i] = secondList[i-1] + firstList[i] + firstList[i-1];
    }
    
    for (int i = 1; i < 11; i++) {
        std::cout << setw(10) << firstList[i] << setw(10) << secondList[i] << std::endl;
    }
    return 0;
}

// special thanks to : https://algorithmist.com/wiki/UVa_138_-_Street_Numbers
