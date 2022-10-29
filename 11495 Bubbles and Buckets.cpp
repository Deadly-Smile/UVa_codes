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

int inversionCount (int arr1[], int arr2[], int n1, int n2) {
    int p1{0},p2{0},res{0};
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

int inversionMarge (int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int arr1[n1], arr2[n2];

    for (int i = 0; i < n1; i++) {
        arr1[i] = arr[l+i];
    }
    for (int i = 0; i < n2; i++) {
        arr2[i] = arr[m+i+1];
    }

    int res = inversionCount(arr1, arr2, n1, n2);
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

void inversionMargeSort (int arr[], int l, int r, int &res) {
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
		int sum{0};
		inversionMargeSort(arr, 0, n-1, sum);
		if(sum&1)		std::cout << "Marcelo" << std::endl;
		else			std::cout << "Carlos"  << std::endl;
	}
	return 0;
}
