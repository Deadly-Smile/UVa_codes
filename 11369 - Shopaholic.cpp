//----------------------Created by Anik Saha---------------------------//
#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(false);    cin.tie(NULL)
#define Ignore cin.ignore()
#define PF push_front
#define PB push_back
#define testCase int test{0};   cin>>test;  while(test--)
#define forFront(x, y, z) for(int (x) = (y); (x) < (z); (x)++)
#define forBack(x, y, z) for(int (x) = (y); (x) > (z); (x)--)
#define forAuto(x)  for(auto i : (x))
#define takeN int n{0};   cin>>n
#define swap(a,b,T) T temp{a};    a = b;    b = temp
typedef unsigned char Byte;
typedef long long ll;
typedef unsigned long long ull;
template<typename T>
void inputArray(T arr[], int &n){
    for(int i = 0; i < n; i++){          // inputting array
        cin>>arr[i];
    }
}
//---------------------------Good luck---------------------------------//

int main() {
    FastIO;
    // freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);
    testCase {
        takeN;
        int arr[n]; inputArray(arr,n);
        std::sort(arr,arr+n);
        int costFree{0};
        for(int i = n-3; i >= 0; i -= 3){
            costFree += arr[i];
        }
        std::cout << costFree << std::endl;
    }
    return 0;
}
