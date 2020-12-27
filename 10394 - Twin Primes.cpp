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
    vector<bool> prime(20000001,true);
    vector<int> prime_list;
    std::vector<std::pair<int,int>> twinPrime;
    prime_list.push_back(1);
    
    prime[0] = false;
    prime[1] = false;
    
    for(int i = 2; i<20000001; i++){
        if(prime[i]){
            prime_list.push_back(i);
            if(prime[i] && prime[i-2]){
                std::pair<int,int> p(i,i-2);
                twinPrime.PB(p);
            }
            for(int j=i+i; j<20000001; j+=i){
                prime[j]=false;
            }
        }
    }
    
    int n{0};
    while(scanf("%d",&n) != EOF){
        // if(n == 0)  break;
        if(n > twinPrime.size()){
            std::cout << "0" << std::endl;
            continue;
        }else{
            n--;
            printf("(%d, %d)\n",twinPrime[n].second,twinPrime[n].first);
        }
    }
    
    return 0;
}
