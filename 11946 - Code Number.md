# UVa_codes
Assignment for 1.2 S.P.L.S-2 
#include<cstdio>
#include<cmath>
int main()
{
    char c{0};
    scanf("%c%c",&c,&c);
    while(scanf("%c",&c)!=EOF){
        if(c>='0'&&c<='9')
        {
            if(c=='0'){
                c='O';
            }else if(c=='1'){
                c='I';
            }else if(c=='2'){
                c='Z';
            }else if(c=='3'){
                c='E';
            }else if(c=='4'){
                c='A';
            }else if(c=='5'){
                c='S';
            }else if(c=='6'){
                c='G';
            }else if(c=='7'){
                c='T';
            }else if(c=='8'){
                c='B';
            }else if(c=='9'){
                c='P';
            }
        }
        printf("%c",c);
    }
    return 0;
}
