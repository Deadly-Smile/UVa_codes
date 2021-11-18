#include<cstdio>
void swap(int *num1,int *num2)
{
    *num1=*num1 + *num2;
    *num2=*num1 - *num2;
    *num1=*num1 - *num2;
}
int main ()
{
    int n{0};
    scanf("%d",&n);
    while(n--)
    {
        int size{0};
        scanf("%d",&size);
        int arr[size];
        for(int i=0;i<size;++i)
        {
            scanf("%d",&arr[i]);
        }
        int count{0};
        for(int i=0;i<size;++i)
        {
            bool flag=1;
            for(int j=1;j<size-i;++j)
            {
                if(arr[j-1]>arr[j]){
                    swap(&arr[j-1],&arr[j]);
                    count++;
                    flag=0;
                }
            }
            if(flag){
                break;
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",count);
    }
    return 0;
}
