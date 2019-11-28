# UVa_codes
Assignment for 1.2 S.P.L.S-2 
#include <iostream>
using namespace std;
int main() {

    int v{0},t{0};
    while(scanf("%d %d",&v,&t)!=EOF)
    {
        v*=t*2;
        printf("%d\n",v);
    }
    return 0;
}
