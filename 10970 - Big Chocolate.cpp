#include <iostream>
using namespace std;
int main()
{
    short int  m{0},n{0};
    while (scanf("%hi%hi",&m,&n)!=EOF)
    {
        cout<<m*n-1<<endl;
    }

    return 0;
}
