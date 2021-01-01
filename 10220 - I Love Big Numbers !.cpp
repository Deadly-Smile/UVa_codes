#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned short int n{0};
    char c{0};
    while(scanf("%hu",&n)!=EOF){
        long long int carry{0};
        short int rem{0};
        string s1{"1"},s2;
        for(short int i=1;i<=n;i++){
            for(short int j=s1.length()-1;j>=0;--j) {
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
        }
        // cout<<n<<"!"<<"\n"<<s1<<endl;
        int count{0};
        for(auto i : s1){
            count += i - '0';
        }
        cout<< count << endl;
    }
    return 0;
}
