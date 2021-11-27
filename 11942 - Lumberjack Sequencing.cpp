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

int main() {
    FastIO;

    int test{0};   std::cin >> test;
    std::cout << "Lumberjacks:" << std::endl;
    while(test--) {
        int n = 10;
        int arr[n]; inputArray(arr, n);

        bool forword = std::is_sorted(arr,arr+n);
        bool backword = std::is_sorted(arr,arr+n,greater<int>());
        if(forword && backword) {
            std::cout << "Unordered" << std::endl;
        } else if (forword || backword) {
            std::cout << "Ordered" << std::endl;
        } else {
            std::cout << "Unordered" << std::endl;
        }
    }
    
    return 0;
}
