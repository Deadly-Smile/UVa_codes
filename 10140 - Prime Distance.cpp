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
std::vector<int> firstList;
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

void getPrimeList() {
    calculatePrime(N-1);
    for(int i = 2; i <= N; i++) {
        if(!prime[i])
            firstList.push_back(i);
    }
}

std::vector<int> segmentedSieve(int l, int h) {
    bool arr[h+1 - l] = {0};
    for(auto i : firstList) {
        if(i > h)   break;
        ll gap = l/i;
        if(gap <= 1) gap = 2;
        for(ll j = i * gap; j <= h; j += i) {
            if(j - l >= 0) {
                ll temp = j-l;
                arr[temp] = 1;
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

    getPrimeList();
    int l{0},h{0};
    while(std::cin >> l >> h) {
        std::vector<int> record = segmentedSieve(l, h);
        int n = record.size();
        if(n < 2) {
            std::cout << "There are no adjacent primes." << std::endl;
            continue;
        }

        std::pair<int, pairs> choto{INT_MAX, {0,0}},boro{INT_MIN, {0,0}};
        for (int i = 1; i < n; i++) {
            if(choto.first > record[i] - record[i-1]) {
                choto.first = record[i] - record[i-1];
                choto.second.first = record[i-1];
                choto.second.second = record[i];
            }
            if(boro.first < record[i] - record[i-1]) {
                boro.first = record[i] - record[i-1];
                boro.second.first = record[i-1];
                boro.second.second = record[i];
            }
        }
        std::cout << choto.second.first << "," << choto.second.second << " are closest, " <<
        boro.second.first << "," << boro.second.second << " are most distant." << std::endl;
    }
    
    return 0;
}
