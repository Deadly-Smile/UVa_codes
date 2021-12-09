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
const int N = 1e5 + 1;
bool prime[N] = {0};
void calculatePrime(int n) {
    prime[0] = true;
    prime[1] = true;
    for (int i = 2; i*i <= n; i++){
        if (!prime[i]) {
            for (int j = i*i; j <= n; j += i)
                prime[j] = true;
        }
    }
}

std::vector<int> getPrimeList(int n) {
    calculatePrime(n);
    std::vector<int> v;
    for(int i = 2; i <= n; i++) {
        if(!prime[i])
            v.push_back(i);
    }
    return v;
}

std::vector<int> segmentedSieve(int l, int h) {
    std::vector<int> list = getPrimeList(sqrt(h));
    bool arr[h+1 - l] = {0};
    for(auto i : list) {
        int gap = l/i;
        if(gap <= 1) gap = 2;
        for(int j = i * gap; j <= h; j += i) {
            if(j - l >= 0) {
                arr[j-l] = 1;
            }
        }
    }

    std::vector<int> primeList;
    for(int i = 0; i < h+1 - l; i++) {
        if(!arr[i]) {
            if(i+l != 1)
                primeList.push_back(i+l);
        }
    }
    return primeList;
}

int main() {
    FastIO;
    const int LIMIT = 1300000;
    VI primeList = segmentedSieve(1, LIMIT);

    int n{0};
    while(std::cin >> n && n) {
        auto it = std::lower_bound(primeList.begin(),primeList.end(),n);
        auto jt = it--;

        if(n == *it || n == *jt)    std::cout << 0 << std::endl;
        else if(n == 1)             std::cout << 2 << std::endl;
        else           std::cout << abs(*it - *jt) << std::endl;
    }
    
    return 0;
}
