#include <stdio.h>
int main()
{
    unsigned short int C[3],B[3],G[3];
    unsigned short int count,min=65530;
    char s1[4];
    s1[3]='\0';
 while(scanf("%hu %hu %hu %hu %hu %hu %hu %hu %hu", &B[0], &G[0], &C[0], &B[1],&G[1], &C[1], &B[2], &G[2], &C[2]))
    {
        min=65530;
        count = C[0] + G[0] + B[1] + G[1] + B[2] + C[2];
        if (count < min)
        {
            min = count;
            s1[0]='B';
            s1[1]='C';
            s1[2]='G';
        }
		count = C[0] + G[0] + B[1] + C[1] + B[2] + G[2];
		if (count < min)
        {
			min = count;
            s1[0]='B';
            s1[1]='G';
            s1[2]='C';
		}
		count = B[0] + G[0] + C[1] + G[1] + B[2] + C[2];
		if (count < min)
        {
			min = count;
            s1[0]='C';
            s1[1]='B';
            s1[2]='G';
		}
		count = B[0] + G[0] + B[1] + C[1] + G[2] + C[2];
		if (count < min)
        {
			min = count;
            s1[0]='C';
            s1[1]='G';
            s1[2]='B';
		}
		count = C[0] + B[0] + C[1] + G[1] + B[2] + G[2];
		if (count < min)
        {
			min = count;
            s1[0]='G';
            s1[1]='B';
            s1[2]='C';
		}
		count = C[0] + B[0] + B[1] + G[1] + G[2] + C[2];
		if (count < min)
        {
			min = count;
            s1[0]='G';
            s1[1]='C';
            s1[2]='B';
		}
        printf("%s %hu\n",s1,min);
    }
    return 0;
}
