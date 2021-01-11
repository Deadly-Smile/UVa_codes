#include <stdio.h>
int main()
{
    short int n=0;
    scanf("%hi",&n);
    for (int i = 0; i < n; ++i) {
        int r=0;
        scanf("%d",&r);
        r=r*5;
        int right=r*.45,left=r*.55,width=r*.6;
        printf("Case %d:\n",i+1);
        printf("%d %d\n", -right, width/2);
        printf("%d %d\n", left, width/2);
        printf("%d %d\n", left, -width/2);
        printf("%d %d\n", -right, -width/2);
    }
    return 0 ;
}
