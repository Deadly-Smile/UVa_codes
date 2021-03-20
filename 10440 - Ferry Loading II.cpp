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
#define makePair(a,b,T1,T2) std::pair<T1,T2> p(a,b)
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
        int n{0},t{0},m{0},last{0};
        std::cin >> n >> t >> m;
        int arr[m]; inputArray(arr,m);
        std::sort(arr,arr+m);
        int now{0},trip{0};
        
        if(m%n == 0) {
            for(int i = n-1; i < m; i += n) {
                trip++;
                if(arr[i] <= now){
                    now += 2*t;
                }else{
                    now = arr[i] + (2*t);
                }
            }
        }else{
            trip++;
            if(arr[m%n - 1] <= now){
                now += 2*t;
            }else{
                now = arr[m%n - 1] + (2*t);
            }
            for(int i = (m%n) + (n-1) ; i < m; i += n) {
                trip++;
                if(arr[i] <= now){
                    now += 2*t;
                }else{
                    now = arr[i] + (2*t);
                }
            }
        }
        
        now -= t;
        std::cout << now << " " << trip << std::endl;
    }
    return 0;
}
