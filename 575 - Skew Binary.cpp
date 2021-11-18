#include<bits/stdc++.h>
int main()
{
    char skrw[102];
    while(scanf("%s",skrw)!=EOF){
        double decimal{0},mul{2};
        for(short int i=strlen(skrw)-1;i>=0;--i){
            decimal+=(mul-1)*(skrw[i]-'0');
            mul*=2;
        }
        if(decimal==0){
            break;
        }else{
            printf("%.0lf\n",decimal);
        }
    }
    return 0;
}
