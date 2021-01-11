#include <cstdio>
int main() {
    int n{0};
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0){
            break;
        }
        int x{0},y{0};
        scanf("%d %d",&x,&y);
        while(n--) {
            int a{0},b{0};
            scanf("%d %d", &a, &b);
            if(a == x || b == y)
            {
                printf("divisa\n");
            }else if(a>x&&b>y){
                printf("NE\n");
            }else if(a<x&&b>y){
                printf("NO\n");
            }else if(a<x&&b<y){
                printf("SO\n");
            }else{
                printf("SE\n");
            }
        }
    }
    return 0;
}
