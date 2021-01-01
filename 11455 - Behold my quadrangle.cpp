#include<cstdio>
#include<cmath>
int main()
{
    unsigned short int n{0};
    scanf("%hu",&n);
    while(n--)
    {
        unsigned int a{0},b{0},c{0},d{0};
        scanf("%u %u %u %u",&a,&b,&c,&d);
        if(a==b&&b==c&&c==d&&d==a)
        {
            printf("square\n");
        }
        else if((a==c&&b==d)||(a==b&&c==d)||(b==c&&a==d))
        {
            printf("rectangle\n");
        }
        else if(a<=b+c+d&&b<=a+c+d&&c<=a+b+d&&d<=a+b+c)
        {
            printf("quadrangle\n");
        }
        else
        {
            printf("banana\n");
        }
    }
    return 0;
}
