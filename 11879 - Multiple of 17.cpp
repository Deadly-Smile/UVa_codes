#include<cstdio>
#include<cmath>
int main()
{
    char s[102];
    while(scanf("%s",s)!=EOF)
    {
        if(s[0]=='0'&&s[1]==0)
            break;
        
        short int d{0},rem{0};
        for(short int i=0;s[i]!=0;++i)
        {
            d=(rem*10)+(s[i]-'0');
            rem=d%17;
        }
        if(rem==0){
            printf("1\n");
        }else{
            printf("0\n");
        }
    }
    return 0;
}
