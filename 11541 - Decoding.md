# UVa_codes
Assignment for 1.2 S.P.L.S-2 
Problem:- 11541 - Decoding
#include<iostream>
#include<string>
using namespace std;
int main()
{
    unsigned short int n{0};
    char c{0};
    scanf("%hu%c",&n,&c);
    string s;
    for(short int i=1;i<=n;++i){
        getline(cin,s);
        short int num{0};
        printf("Case %hi: ",i);
        for(short int j=0;j<s.length();++j){
            if(s[j]>='A' && s[j]<='Z'){
                c=s[j];
            }else if(s[j]>='0'&&s[j]<='9'){
                num=s[j]-'0';
                if(s[j+1]>='0'&&s[j+1]<='9'){
                    num*=10;
                    num+=s[j+1]-'0';
                    j++;
                    if(s[j+1]>='0'&&s[j+1]<='9'){
                        num*=10;
                        num+=s[j+1]-'0';
                        j++;
                    }
                }
            }
            for(short int p=1;p<=num;++p){
                printf("%c",c);
            }
            num=0;
        }
        printf("\n");
    }
    return 0;
}
