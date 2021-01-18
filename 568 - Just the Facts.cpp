#include <bits/stdc++.h>
using namespace std;
char memo[10001] = {'1'};
void factorial(){
    unsigned long long carry{0};
    int rem{0};
    char c{0};
    string s1{"1"},s2;
    for(int i=1;i<=10000;i++){
        for(int j=s1.length()-1;j>=0;--j) {
            carry += (s1.at(j) - '0') * i;
            rem = static_cast<short>(carry % 10);
            carry/=10;
            s1.at(j) = static_cast<char>(rem + '0');
        }
        while (carry!=0){
            c=(carry%10)+'0';
            s1= c + s1;
            carry/=10;
        }
        for(int p = s1.length()-1; p > -1; p--){
            if(s1[p] != '0'){
                memo[i] = s1[p];
                break;
            }
        }
            
    }
        
}
int main()
{
    factorial();
    unsigned short int n{0};
    while(scanf("%hu",&n)!=EOF){
        std::cout << std::setw(5) << n << " -> " << memo[n] << std::endl;
    }
    return 0;
}
