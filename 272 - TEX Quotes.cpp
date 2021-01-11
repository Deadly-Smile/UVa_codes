#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int main() {
    char txt[1100];
    bool flag = true;
    while (cin.getline(txt ,1100))
    {
        short int i=0;
        for(i=0;txt[i]!='\0';i++)
        {
            if(txt[i]=='\"')
            {
                if(flag)
                {
                    printf("``");
                } else
                {
                    printf("''");
                }
                flag=!flag;
            }else
            {
                printf("%c",txt[i]);
            }
        }
        cout<<endl;
    }

    return 0;
}
