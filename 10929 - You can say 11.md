# UVa_codes
Assignment for 1.2 S.P.L.S-2 
#include<cstdio>
#include<cmath>
int main()
{
    char s[1002];
    while(scanf("%s",s)!=EOF)
    {
        if(s[0]=='0'&&s[1]==0)
            break;

        short int d{0},rem{0};
        for(short int i=0;s[i]!=0;++i)
        {
            d=(rem*10)+(s[i]-'0');
            rem=d%11;
        }
        if(rem==0){
            printf("%s is a multiple of 11.\n",s);
        }else{
            printf("%s is not a multiple of 11.\n",s);
        }
    }
    return 0;
}
