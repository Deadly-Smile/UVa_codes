# UVa_codes
Assignment for 1.2 S.P.L.S-2 
#include<cstdio>
#include<cmath>
int main()
{
    float hour{0},minute{0};
    float angle{0.000};
    while(scanf("%f:%f",&hour,&minute)!=EOF)
    {
        if(hour==0 && minute==0)
            break;
        angle=hour*30+(minute/60)*30;
        angle-=minute*6;
        if(angle<0){
            angle*=-1;
        }
        if (angle>180){
            angle=360-angle;
        }
        printf("%.3f\n",angle);
    }
    return 0;
}
