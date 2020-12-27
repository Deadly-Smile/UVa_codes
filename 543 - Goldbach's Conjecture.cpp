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
#define takeN int n{0};   cin>>n
#define swap(a,b,ty) ty temp{a};    a = b;    b = temp
typedef unsigned char Byte;
typedef long long ll;
typedef unsigned long long ull;
//---------------------------Good luck---------------------------------//

int main()
{
    FastIO;
    vector<bool> prime(1000001,true);
    vector<int> primeList;

    for(int i=2; i<1000001; i++){
        if(prime[i]){
            primeList.push_back(i);
            for(int j=i+i; j<1000000; j+=i){
                prime[j]=false;
            }
        }
    }

    int n{0};
    while(scanf("%d",&n) != EOF){
        if(n == 0)  break;
        if(n&1){
            std::cout << "Goldbach's conjecture is wrong." << std::endl;
            continue;
        }

        int index{0};

        forBack(i,n-1,-1){
            if(prime[i]){
                index = i;
                break;
            }
        }
        
        forFront(i,0,primeList.size()){
            if(primeList.at(i) == index){
                index = i;
                break;
            }
        }

        bool isOk = false;
        for(int i = 0,j = index; i <= index/2 && j >= index/2;   ){
            if(primeList.at(i) + primeList.at(j) == n){
                std::cout << n << " = " << primeList.at(i)
                          << " + " << primeList.at(j) << std::endl;
                isOk = true;
                break;
            }
            else if(primeList.at(i) + primeList.at(j) > n){
                j--;
            }else{
                i++;
            }
        }
        if(!isOk) std::cout << "Goldbach's conjecture is wrong." << std::endl;
    }

    return 0;
}
