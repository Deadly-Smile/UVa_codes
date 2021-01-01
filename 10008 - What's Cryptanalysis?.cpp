#include<iostream>
#include<string>
using namespace std;
void swap(short int *xp, short int *yp)
{
    *xp=*xp+*yp;
    *yp =*xp-*yp;
    *xp =*xp-*yp;
}
int main()
{
    unsigned short int n{0};
    char c;
    scanf("%hu%c",&n,&c);
    string s[n];
    short int arr[26] = {0},min_v{-1},min_a{0},i{0};
    for(short int k=0;k<n;++k)
    {
        getline(cin,s[k]);
        for(i=0 ;i<s[k].length();++i)
        {
            if((s[k].at(i)>='a' && s[k].at(i)<='z') || (s[k].at(i)>='A' && s[k].at(i)<='Z'))
            {
                if(s[k].at(i)>='a' && s[k].at(i)<='z'){
                    s[k].at(i)-=32;
                    arr[s[k].at(i)-65]++;
                }else{
                    arr[s[k].at(i)-65]++;
                }
            }
        }
    }
    for(i=0;i<26;++i)
    {
        min_v=-1;
        min_a=0;
        for(short int j=0;j<26;++j){
            if(arr[j]>min_v){
                min_v=arr[j];
                min_a=j;
            }
        }
        if(min_v==0)
            break;
        printf("%c %hi\n",min_a+65,arr[min_a]);
        arr[min_a]=-1;
    }

    return 0;
}
