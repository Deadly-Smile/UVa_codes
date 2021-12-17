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
template<typename T>    // inputting array
void inputArray(T arr[], int n){
    for(int i = 0; i < n; i++){          
        cin >> arr[i];
    }
}

ll calculateDiff(int arr[], int n, int x) {
    ll sum{0};
    for(int i = 0; i < n; i++) {
        sum += abs(arr[i] - arr[x]);
    }   return sum;
}

int main() {
    FastIO;

    int test{0};    cin >> test;
    while(test--) {
        int n{0};    cin >> n;
        int arr[n]; inputArray(arr, n);
        sort(arr, arr+n);
        if(n & 1)   
            cout << calculateDiff(arr, n, (n)/2) << endl;
        else
            cout << std::min(calculateDiff(arr, n, (n+2)/2), 
                    calculateDiff(arr, n, (n)/2)) << endl;
    }

    return 0;
}
