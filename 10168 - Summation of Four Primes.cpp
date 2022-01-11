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
const int N = 1e7 + 1;
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

pairs goldBachConjecture(int n, std::vector<int> &record) {
    // two pointer approach O(N)
    int left{0},right{(int)record.size()-1};
    while(left <= right) {
        if(record[left]+record[right] == n) {
            return {record[left], record[right]};
        } else if(record[left]+record[right] > n) {
            right--;
        } else {
            left++;
        }
    }
    return {-1,-1};
}

int main() {
    FastIO;

    std::vector<int> record = getPrimeList(N);
    int n{0};
    while(std::cin >> n) {
        if(n < 8) {
            std::cout << "Impossible." << std::endl;
            continue;
        }
        if(n & 1) {
            std::cout << "2 3 ";
            pairs p = goldBachConjecture(n - 5, record);
            std::cout << p.first << " " << p.second << std::endl;
        } else {
            std::cout << "2 2 ";
            pairs p = goldBachConjecture(n - 4, record);
            std::cout << p.first << " " << p.second << std::endl;
        }
    }
    
    return 0;
}
