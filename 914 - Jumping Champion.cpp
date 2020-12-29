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
std::vector<bool> prime(1000001,true);
void getPrime(){
    forFront(i,2,1000001){
        if(prime[i]){
            for(int j = i + i; j < 1000001; j += i)
                prime[j] = false;
        }
    }
}
int main()
{
    FastIO;
    prime[0] = false;
    prime[1] = false;
    getPrime();
    testCase{
        int l{0},h{0};
        std::cin >> l >> h;

        std::map<int,int> diff;
        int prev{0};

        forFront(i,l,h+1){
            if(prime[i]){
                if(prev == 0)   prev = i;
                else{
                    diff[i - prev]++;
                    prev = i;
                }
            }
        }

        prev = 0;
        int x{0};
        bool isFirst{true};

        for(auto i : diff){
            if(prev < i.second){
                isFirst = true;
                x = i.first;
                prev = i.second;
            }else if(prev == i.second){
                isFirst = false;
            }
        }

        if(!isFirst){
            std::cout << "No jumping champion" << std::endl;
        }else{
            if(x == 0)  std::cout << "No jumping champion" << std::endl;
            else std::cout << "The jumping champion is " << x << std::endl;
        }
    }
    return 0;
}
