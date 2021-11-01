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
const int N = 110;
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

std::vector<int> getPrimeFactors(int n) {
    std::vector<int> list;
    while(n % 2 == 0) {
        list.push_back(2);
        n /= 2;
    }

    for(int i = 3; i * i <= n; i += 2) {
        while(n % i == 0) {
            list.push_back(i);
            n /= i;
        }
    }

    if(n > 2) {
        list.push_back(n);
    }
    return list;
}

int main() {
    FastIO;

    auto v = getPrimeList(100);
    int n{0};
    while(std::cin >> n) {
        if(!n)  break;
        std::map<int, int> record;

        for (auto i : v) {
            record.insert({i,0});
        }

        for (int i = 2; i <= n; i++) {
            VI temp = getPrimeFactors(i);
            for (const auto &it : temp) {
                record[it]++;
            }
        }

        bool hasStarted = false;
        std::stack<int> stac;
        for (auto it = record.rbegin(); it != record.rend(); it++) {
             if(!hasStarted && it->second) hasStarted = true;
             if(hasStarted) stac.push(it->second);
        }

        std::cout << setw(3) << n << "! =";
        for (int i = 0; !stac.empty(); i++) {
            if(i > 0 && i % 15 == 0)
                std::cout << "\n      ";
            std::cout << setw(3) << stac.top();
            stac.pop();
        }   std::cout << std::endl;
    }
    
}
