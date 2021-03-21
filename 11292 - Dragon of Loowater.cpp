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
    int n{0},m{0};
    while(std::cin >> n >> m) {
        if(m == 0 && n == 0)    break;
        int heads[n],knights[m];
        inputArray(heads,n);
        inputArray(knights,m);
        if(m < n) {
            std::cout << "Loowater is doomed!" << std::endl;
            continue;
        }
        std::sort(heads,heads+n);
        std::sort(knights,knights+m);
        
        ull cost{0};
        int j{0};
        forFront(i,0,m){
            if(heads[j] <= knights[i]){
                cost += knights[i];
                j++;
            }
            
            if(j == n)  break;
        }
        
        if(j < n) {
            std::cout << "Loowater is doomed!" << std::endl;
        }else{
            std::cout << cost << std::endl;
        }
        
    }
    return 0;
}
