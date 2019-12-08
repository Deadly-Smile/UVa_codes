# UVa_codes
Assignment for 1.2 S.P.L.S-2 
#include<stdio.h>
int main()
{
    char s{0};
    while(scanf("%c",&s)!=EOF)
    {
        if(s=='1')
        {
            printf("`");
        }else if(s=='2')
        {
            printf("1");
        }else if(s=='3'){
            printf("2");
        }else if(s=='4')
        {
            printf("3");
        }else if(s=='5'){
            printf("4");
        }else if(s=='6'){
            printf("5");
        }else if(s=='7'){
            printf("6");
        }else if(s=='8'){
            printf("7");
        }else if(s=='9'){
            printf("8");
        }else if(s=='0'){
            printf("9");
        }else if(s=='-'){
            printf("0");
        }else if (s=='='){
            printf("-");
        }else if(s=='W'){
            printf("Q");
        }else if(s=='E'){
            printf("W");
        }else if(s=='R'){
            printf("E");
        }else if(s=='T'){
            printf("R");
        }else if(s=='Y'){
            printf("T");
        }else if(s=='U'){
            printf("Y");
        }else if(s=='I'){
            printf("U");
        }else if(s=='O'){
            printf("I");
        }else if(s=='P'){
            printf("O");
        }else if(s=='['){
            printf("P");
        }else if(s==']'){
            printf("[");
        }else if (s=='\\'){
            printf("]");
        }else if(s=='S'){
            printf("A");
        }else if(s=='D'){
            printf("S");
        }else if(s=='F'){
            printf("D");
        }else if(s=='G'){
            printf("F");
        }else if(s=='H'){
            printf("G");
        }else if(s=='J'){
            printf("H");
        }else if(s=='K'){
            printf("J");
        }else if(s=='L'){
            printf("K");
        }else if(s==';'){
            printf("L");
        }else if(s=='\''){
            printf(";");
        }else if(s=='X'){
            printf("Z");
        }else if(s=='C'){
            printf("X");
        }else if(s=='V'){
            printf("C");
        }else if(s=='B'){
            printf("V");
        }else if(s=='N'){
            printf("B");
        }else if(s=='M'){
            printf("N");
        }
        else if(s==','){
            printf("M");
        }else if(s=='.'){
            printf(",");
        }else if(s=='/'){
            printf(".");
        }else if(s==' '){
            printf(" ");
        }else if(s=='\n'){
            printf("\n");
        }
        else {
            printf(" ");
        }
    }
    return 0;
}
