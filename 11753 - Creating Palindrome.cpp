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

int recur(int arr[], int n, int k, int i, int j, int count) {
	if(k < count) return INT_MAX;
	if(i >= j) 	return count;
	if(arr[i] == arr[j]) {
		return recur(arr, n, k, i+1, j-1, count);
	} else {
		return std::min(recur(arr, n, k, i+1, j, count+1), recur(arr, n, k, i, j-1, count+1));
	}
}

int main() {
    FastIO;
    int test{0};	std::cin >> test;
    for(int t = 1; t <= test; t++) {
        int n{0},k{0};
        std::cin >> n >> k;
        int arr[n];	inputArray(arr, n);
        int count = recur(arr, n, k, 0, n-1, 0);
        std::cout << "Case " << t << ": ";
        if(!count) {
            std::cout << "Too easy" << std::endl;
        } else if(count <= k) {
            std::cout << count << std::endl;
        } else {
            std::cout << "Too difficult" << std::endl;
        }
    }

    return 0;
}
