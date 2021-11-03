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
template<typename T1>
T1 gcd (T1 a, T1 b) {
    if (b == 0) return a;
    else    return gcd (b, a%b);
}

template<typename T>
int inputArrayFromString(T arr[], string s) {
    istringstream numbers(s);
    int n{0};
    while(numbers >> arr[n]) {
        n++;
    }
    return n;
}

int main() {
    FastIO;

    string s;
    int arr[101];
    int test{0};   std::cin >> test;
    getline(cin,s);
    while(test--) {
        getline(cin,s);
        int n = inputArrayFromString(arr,s);

        int max{1};
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                max = std::max(max, gcd(arr[i],arr[j]));
            }
        }
        std::cout << max << std::endl;
    }
    
    return 0;
}
