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
//---------------------------Good luck---------------------------------//
int findParson(vector<std::pair<string,int>> parson, string name) {
    forFront(i,0,parson.size()) {
        if(parson.at(i).first == name) {
            return i;
        }
    }
    return parson.size()-1;
}

int main() {
    FastIO;
    //  freopen("../input.txt", "r", stdin);
    //  freopen("../output.txt", "w", stdout);
    int n{0},t{0},c{1};
    while(std::cin >> n >> t) {
        if(n == 0 && t == 0) break;
        std::vector<std::pair<string,int>> parson;
        string s;

        forFront(i,0,n) {
            Ignore; std::cin >> s;
            parson.PB(make_pair(s,0));
        }

        forFront(i,0,t) {
            Ignore; std::cin >> s;
            int index1 = findParson(parson,s);
            Ignore; std::cin >> s;
            int index2 = findParson(parson,s);
            int proxy{0}; std::cin >> proxy;

            parson.at(index1).second += proxy;
            parson.at(index2).second -= proxy;
        }

        std::cout << "Case #" << c++ << "\n";

        forFront(i,0,n){
             bool isNegative;
             if(parson.at(i).second < 0){
                 isNegative = true;
             }else{
                 isNegative = false;
             }
             forFront(j,0,n){
                 if(j != i && parson.at(i).second != 0 && parson.at(j).second != 0){
                     if(isNegative && parson.at(j).second > 0){
                         cout << parson.at(i).first << " " << parson.at(j).first;
                         int temp{parson.at(j).second + parson.at(i).second};
                         if(abs(parson.at(i).second) > parson.at(j).second) {
                             cout << " " << parson.at(j).second << endl;
                             parson.at(j).second = 0;
                             parson.at(i).second = temp;
                             continue;
                         }else if(abs(parson.at(i).second) < parson.at(j).second){
                             cout << " " << abs(parson.at(i).second) << endl;
                             parson.at(j).second = temp;
                             parson.at(i).second = 0;
                             break;
                         }else{
                             cout << " " << abs(parson.at(i).second) << endl;
                             parson.at(j).second = 0;
                             parson.at(i).second = 0;
                             break;
                         }
                     }
                     else if(!isNegative && parson.at(j).second < 0){
                         cout << parson.at(j).first << " " << parson.at(i).first;
                         int temp{parson.at(j).second + parson.at(i).second};
                         if(parson.at(i).second > abs(parson.at(j).second)) {
                             cout << " " << abs(parson.at(j).second) << endl;
                             parson.at(j).second = 0;
                             parson.at(i).second = temp;
                             continue;
                         }else if(parson.at(i).second < abs(parson.at(j).second)){
                             cout << " " << parson.at(i).second << endl;
                             parson.at(j).second = temp;
                             parson.at(i).second = 0;
                             break;
                         }else{
                             cout << " " << abs(parson.at(i).second) << endl;
                             parson.at(j).second = 0;
                             parson.at(i).second = 0;
                             break;
                         }
                     }
                 }
             }
         }
        std::cout << "\n";

    }
    return 0;
}
