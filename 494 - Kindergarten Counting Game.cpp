#include<stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[1009];
    while (gets(s))
    {
        short int count{0};
        bool flag{false};
        for (short int i = 0; i <strlen(s) ; ++i) {
            if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
                flag = true;
            } else{
                count+=flag;
                flag= false;
            }
        }
        if(flag){
            count++;
        }
        printf("%hi\n",count);
    }
    return 0;
}
