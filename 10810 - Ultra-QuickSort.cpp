//----------------------Created by Anik Saha---------------------------//
#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(false);    cin.tie(NULL)
#define Ignore cin.ignore()
#define PF push_front
#define PB push_back
#define MP make_pair
typedef unsigned char Byte;
typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int, int> pairs;
//---------------------------Good luck---------------------------------//
template<typename T>
void inputArray(T arr[], int n) {
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

ll inversionCount (int arr1[], int arr2[], ll n1, ll n2) {
    ll p1{0},p2{0},res{0};
    while(p1 < n1 && p2 < n2) {
        if(arr1[p1] <= arr2[p2]) {
            p1++;
        } else {
            res += n1 - p1;
            p2++;
        }
    }
    return res;
}

ll inversionMarge (int arr[], ll l, ll m, ll r) {
    ll n1 = m - l + 1;
    ll n2 = r - m;
    int arr1[n1], arr2[n2];

    for (int i = 0; i < n1; i++) {
        arr1[i] = arr[l+i];
    }
    for (int i = 0; i < n2; i++) {
        arr2[i] = arr[m+i+1];
    }

    ll res = inversionCount(arr1, arr2, n1, n2);
    int p1{0},p2{0};
    while(p1 < n1 && p2 < n2) {
        if(arr1[p1] <= arr2[p2]) 
            arr[l++] = arr1[p1++];
        else 
            arr[l++] = arr2[p2++];
    }

    while(p1 < n1) {
        arr[l++] = arr1[p1++];
    }
    while(p2 < n2) {
        arr[l++] = arr2[p2++];
    }
    return res;
}

void inversionMargeSort (int arr[], ll l, ll r, ll &res) {
    if(l >= r)  return;
    int m = l + (r-l)/2;
    inversionMargeSort(arr, l, m, res);
    inversionMargeSort(arr, m+1, r, res);
    res += inversionMarge(arr, l ,m, r);
}

int main() {
    FastIO;

    int n{0};
    while(std::cin >> n && n) {
        int arr[n];
        inputArray(arr, n);
        ll ans{0};
        inversionMargeSort(arr, 0, n-1, ans);
        std::cout << ans << std::endl;
    }
    
    return 0;
}
