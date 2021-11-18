#include<bits/stdc++.h>
int main()
{
    unsigned int n{0};
    scanf("%hu",&n);
    char c{0};
    while(n--){
        char s1[202],s2[202],sum[202];
        scanf("%s%c%s",s1,&c,s2);
        int carry{0};
        short int i=0;
        if(strlen(s1)>=strlen(s2)){
            for(i=0;i<strlen(s1);++i){
                if(i<strlen(s2)){
                     carry+=(s1[i]-'0')+(s2[i]-'0');
                }else{
                    carry+=s1[i]-'0';
                }
                sum[i]=carry%10 + '0';
                carry/=10;
            }
        }else if(strlen(s1)<strlen(s2)){
            for(i=0;i<strlen(s2);++i){
                if(i<strlen(s1)){
                     carry+=(s1[i]-'0')+(s2[i]-'0');
                }else{
                    carry+=s2[i]-'0';
                }
                sum[i]=carry%10 + '0';
                carry/=10;
            }
        }
        sum[i]='\0';
        bool zero=true;
        for(short int j=0;sum[j]!='\0';++j){
            if(sum[j]=='0'&&zero){
                continue;
            }else{
                zero=false;
                printf("%c",sum[j]);
            }
        }
        if(carry!=0){
            printf("%d",carry);
        }
        printf("\n");
    }
    return 0;
}
