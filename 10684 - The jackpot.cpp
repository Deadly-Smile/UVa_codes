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

int kadaneMaxSum(int arr[], int n) {
    int maxSoFar{0};
    int current{0};

    for(int i = 0; i < n; i++) {
        current += arr[i];
        if(maxSoFar < current)
            maxSoFar = current;
        if(current < 0)
            current = 0;
    }

    if(maxSoFar == 0) {
        maxSoFar = arr[0];
        for(int i = 1; i < n; i++) {
            if(maxSoFar < arr[i])
                maxSoFar = arr[i];
        }
    }
    return maxSoFar;
}

int main() {
    FastIO;

    int n{0};
    while(std::cin >> n && n) {
        int arr[n]; inputArray(arr,n);
        int sum = kadaneMaxSum(arr,n);
        if(sum > 0) {
            std::cout << "The maximum winning streak is " 
            << sum << "." << std::endl;
        } else {
            std::cout << "Losing streak." << std::endl;
        }
    }
    return 0;
}
