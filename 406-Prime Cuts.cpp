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
    int n{0},c{0};
    while(scanf("%d %d",&n,&c) != EOF){
        std::vector<int> pList;
        pList.PB(1);
        std::vector<int> aList;
        forFront(i,2,n+1){
            bool isOk{true};
            for(int j = 2; j <= sqrt(i); j++){
                if(i % j == 0){
                    isOk = false;
                    break;
                }
            }
            if(isOk){
                pList.PB(i);
            }
        }
        if(pList.size() % 2){
            aList.PB(pList.at(pList.size() / 2));
            int k = pList.size()/ 2;
            forFront(i,0,c-1){
                if(k == pList.size() -1)   break;
                k++;
                aList.PB(pList.at(k));
            }
            k = pList.size() / 2;
            forFront(i,0,c-1){
                if(k == 0)  break;
                k--;
                aList.PB(pList.at(k));
            }
        }else{
            aList.PB(pList.at((pList.size()) / 2));
            aList.PB(pList.at((pList.size() - 1) / 2));
            int k = pList.size() / 2;
            forFront(i,0,c-1){
                k++;
                if(k == pList.size())   break;
                aList.PB(pList.at(k));
            }
            k = (pList.size()-1) / 2;
            forFront(i,0,c-1){
                k--;
                if(k == -1)  break;
                aList.PB(pList.at(k));
            }
        }
        std::sort(aList.begin(),aList.end());
        std::cout << n << " " << c << ":";
        for(int i : aList){
            std::cout << " " << i;
        }
        std::cout  << '\n' << std::endl;
    }
    return 0;
}
