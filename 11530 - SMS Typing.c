#include <stdio.h>
int main()
{
    short int n;
    scanf("%hi",&n);
    scanf("");
    for (int i = 0; i < n; ++i) {
        char s[102];
        gets(s);
        short l{0},j{0};
        while (s[j] !='\0')
        {
            l++;
            if(s[j]=='b'||s[j]=='e'||s[j]=='h'||s[j]=='k'||s[j]=='n'||s[j]=='q'||s[j]=='u'||s[j]=='x')
            {
                l++;
            }else if(s[j]=='c'||s[j]=='f'||s[j]=='i'||s[j]=='l'||s[j]=='o'||s[j]=='r'||s[j]=='v'||s[j]=='y'){
                l+=2;
            } else if(s[j]=='s'||s[j]=='z')
            {
                l+=4;
            }
            j++;
        }
        printf("Case #%d: %d",i+1,l);
    }

    return 0;
}
