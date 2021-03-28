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
#define swap(a,b,T) T temp{a};    (a) = (b);    (b) = (temp)
#define fileReadWrite freopen("../input.txt", "r", stdin); freopen("../output.txt", "w", stdout)
typedef unsigned char Byte;
typedef long long ll;
typedef unsigned long long ull;
//---------------------------Good luck---------------------------------//
std::vector<std::vector<int>> tree;

void initialization(){
    tree.PB(std::vector<int>(1,1));
    forFront(i,1,20){
        int factor{(int)pow(2,i-1)};
        std::vector<int> step;
        forFront(j,0,tree.at(i-1).size()){
            step.PB(tree[i-1][j]);
            step.PB(tree[i-1][j] + factor);
        }
        tree.PB(step);
    }
    // testing -_-    
    // forAuto(tree){
    //     forFront(j,0,i.size()){
    //         std::cout << i.at(j) << " ";
    //     } std::cout << std::endl;
    // }
}

int main() {
    FastIO;
    // fileReadWrite;
    initialization();
    int test{0};
    while(std::cin >> test) {
        if(test == -1) break;
        while(test--){
            int depth{0},l{0};
            std::cin >> depth >> l;
            if(depth == 1) {
                std::cout << "1" << std::endl;
                continue;
            }
            int factor = (int)pow(2,depth-1);
            forFront(i,0,tree.at(depth-1).size()){
                if(tree[depth-1][i] == l){
                    cout << i + factor << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
