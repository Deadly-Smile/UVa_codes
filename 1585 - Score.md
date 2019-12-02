# UVa_codes
Assignment for 1.2 S.P.L.S-2 
#include<stdio.h>
#include<string.h>
int main()
{
    int n{0};
    scanf("%d",&n);
    while(n--)
    {
        char arr[82];
        scanf("%s",arr);
        short int len= static_cast<short>(strlen(arr)),count{0};
        int sum{0};
        for(short int i=0;i<len;i++)
        {
            if(arr[i]=='O')
            {
                for(short int j=i;arr[j]!='X'&&arr[j]!='\0';++j)
                {
                    count++;
                    sum+=count;
                }
                i+=count;
                count=0;
            }
        }
        printf("%d\n",sum);
     }
    return 0;
}
