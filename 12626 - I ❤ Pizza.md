# UVa_codes
Assignment for 1.2 S.P.L.S-2 
#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    unsigned short int n{0};
    char c{0};
    scanf("%hu%c",&n,&c);
    string s;
    while(n--){
        getline(cin,s);
        short int count{0};
        short int a{0},m{0},r{0},j{0},g{0},t{0};
        for(short int i=0;i<s.length();i++){
            if(s.at(i)=='A'){
                a++;
            }else if(s.at(i)=='M'){
                m++;
            }else if(s.at(i)=='G'){
                g++;
            }else if(s.at(i)=='T'){
                t++;
            }else if(s.at(i)=='R'){
                r++;
            }else if(s.at(i)=='I'){
                j++;
            }
            if(m>=1&&a>=3&&g>=1&&r>=2&&j>=1&&t>=1){
                count++;
                m-=1;
                a-=3;
                g-=1;
                r-=2;
                j-=1;
                t-=1;
            }
        }
        printf("%hi\n",count);
    }
    
    return 0;
}
