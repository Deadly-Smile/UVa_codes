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

int solve(int arr[], int n) {
	int sum{0};
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	bool matrix[n+1][sum+1] = {false};
	for (int i = 0; i < sum+1; i++) {
		matrix[0][i] = false;
	}
	for (int i = 0; i < n+1; i++) {
		matrix[i][0] = true;
	}

	for (int i = 1; i < n+1; i++) {
		for (int j = 1; j < sum+1; j++) {
			if(j >= arr[i-1]) {
				matrix[i][j] = matrix[i-1][j] || matrix[i-1][j-arr[i-1]];
			} else {
				matrix[i][j] = matrix[i-1][j];
			}
		}
	}

	int diff{INT_MAX};
	for (int i = 0; i <= (sum+1)/2; i++) {
		bool isOk{false};
		for (int j = 0; j < n+1; j++) {
			if(matrix[j][i]) {
				isOk = true;
				break;
			}
		}
		if(isOk) {
			// std::cout << sum-i << " " << i << " " << diff << std::endl;
			diff = diff < abs((sum-i) - i) ? diff : abs((sum-i) - i);
		}
	}
	return diff;
}

int main() {
	FastIO;

	int test{0};	std::cin >> test;
	while(test--) {
		int n{0};
		std::cin >> n;
		int arr[n];
		inputArray(arr, n);
		std::cout << solve(arr, n) << std::endl;
	}

	return 0;
}
