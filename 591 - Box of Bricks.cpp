#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=0,k=1;
    while(scanf("%d",&n)!=EOF){
        if(n==0)
        {
            break;
        }
        int avarage=0,j=0;
        vector<int>arr;
        for(int i=0;i<n;i++)
        {
            cin>>j;
            arr.push_back(j);
            avarage+=arr.at(i);
        }
        avarage/=n;
        int count=0;
        for(j=0;j<n;j++)
        {
            if(arr.at(j)>avarage)
                count+=arr.at(j)-avarage;
        }
        cout<<"Set #"<<k<<endl;
        k++;
        cout<<"The minimum number of moves is "<<count<<"."<<endl;
        cout<<endl;
    }

    return 0;
}
