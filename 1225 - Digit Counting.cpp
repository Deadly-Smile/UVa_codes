#include<bits/stdc++.h>
int main()
{
    short int t{0},n{0},proxy{0};
    scanf("%hi",&t);
    while(t--){
        scanf("%hi",&n);
        short digits[10] = {0};
        for(short int i=1;i<=n;++i){
            if(i<=9){
                digits[i]++;
            }else if(i>=10){
                proxy=i;
                while(proxy>0){
                    digits[proxy%10]++;
                    proxy/=10;
                }
            }
        }
        for(short int i=0;i<=9;++i){
            if(i!=9){
                printf("%d ",digits[i]);
            }
            else{
                printf("%d",digits[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
