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

template<typename M>
M min(std::vector<M> arr){
    M m{arr[0]};
    for(int i = 1; i < arr.size(); i++){
        if(m > arr[i])
            m = arr[i];
    }
    return m;
}

int main() {
    FastIO;

    int test{0};    std::cin >> test;
    for (int t = 1; t <= test; t++) {
        std::cout << "Case " << t << ": ";
        int n = 7;
        int arr[n]; inputArray(arr,n);

        int sum{0};
        for (int i = 0; i < n-3; i++) {
            sum += arr[i];
        }

        sum += ((arr[6]+arr[5]+arr[4]) - min({arr[6], arr[5], arr[4]}))/2;

        if(sum >= 90)       std::cout << "A" << std::endl;
        else if(sum >= 80)  std::cout << "B" << std::endl;
        else if(sum >= 70)  std::cout << "C" << std::endl;
        else if(sum >= 60)  std::cout << "D" << std::endl;
        else                std::cout << "F" << std::endl;
    }

    return 0;
}
