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
template<typename T>
void inputArray(T arr[], int n) {
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

template<typename T1>
T1 gcd (T1 a, T1 b) {
    if (b == 0) return a;
    else    return gcd (b, a%b);
}

int main() {
    FastIO;

    int n{0};
    while(std::cin >> n && n) {
        int arr[n]; inputArray(arr, n);
        int matched{0};
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                if(gcd(arr[i],arr[j]) == 1) 
                    matched++;
            }
        }

        if(!matched) {
            printf("No estimate for this data set.\n");
            continue;
        } 
        int allPair = n * (n-1) / 2;
        double res = sqrt((double) 6 * allPair / matched);
        printf("%.6lf\n", res);
    }
    return 0;
}
