//----------------------Created by Anik Saha---------------------------//
#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(false);    cin.tie(NULL);
#define testCase int test{0};   cin>>test;  while(test--)
#define forLoop(x, y, z) for(int (x) = (y); (x) < (z); (x)++)

template<typename T>
void input_array(T arr[], int &n){
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
}

//---------------------------Goob luck---------------------------------//


int main()
{
    FastIO
    int n{0},arr[3002],track[3002];
    while(cin>>n){
        input_array<int> (arr,n);
        bool is_ok{true};
        
        forLoop(i,1,n)  track [i-1] = abs(arr[i] - arr[i-1]);
        
        std::sort(track,track+(n-1));
        
        forLoop(i,0,n-1){
            if(track[i] != i+1){
                is_ok = false;
                break;
            }
        }
        
        if(is_ok) std::cout << "Jolly" << std::endl;
        else std::cout << "Not jolly" << std::endl;
    }
    return 0;
}
