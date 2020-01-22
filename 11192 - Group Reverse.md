# UVa_codes
Assignment for 1.2 S.P.L.S-2 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    short int n{0};
    char s[102];
    while(scanf("%hi ",&n)!=EOF){
        if(!n) break;
        scanf("%s",s);
        short int t=strlen(s)/n;
        for(short int i=0;i<strlen(s);i++) {
            for(short int j=i+t-1;j>=i;j--){
                printf("%c",s[j]);
            }
            i+=t-1;    
        }
        printf("\n");
    }
    return 0;
}
