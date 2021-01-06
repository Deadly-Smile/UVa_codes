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
#define forAuto(x)  for(auto i : )
#define takeN int n{0};   cin>>n
#define swap(a,b,ty) ty temp{a};    a = b;    b = temp
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
std::vector<bool> prime(10001,true);
std::vector<int> primeList;
void getPrime(){
    forFront(i,2,10001){
        if(prime[i]){
            primeList.PB(i);
            for(int j = i + i; j < 10001; j += i)
                prime[j] = false;
        }
    }
}

int main()
{
    FastIO;
    getPrime();
    testCase{
        takeN;
        forFront(i,0,primeList.size()){
            if(n / primeList[i] < 2 && n / primeList[i] >= 1){
                std::cout << primeList[i] << std::endl;
                break;
            }else if(n / primeList[i] < 1){
                std::cout << primeList[i-1] << std::endl;
                break;
            }
        }
    }
    
    return 0;
}
