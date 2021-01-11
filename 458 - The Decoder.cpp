#include <iostream>
using namespace std;
int main()
{
    char c;
    while(scanf("%c",&c)!=EOF){
        if(c!='\n')
        {
            c-=7;
            cout<<c;
        } else{
            cout<<c;
        }
    }
    return 0;
}
