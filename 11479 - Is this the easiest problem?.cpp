#include<iostream>
using namespace std;
int main()
{
    int num{0};
    cin>>num;
    for (int i=0;i<num;i++) {
        long int a,c,b;
        cin>>a;
        cin>>b;
        cin>>c;
        if(a<0||b<0||c<0)
        {
            cout<<"Case "<<i+1<<": Invalid"<<endl;
        }
        else if(a+b<=c||a+c<=b||b+c<=a)
        {
            cout<<"Case "<<i+1<<": Invalid"<<endl;
        }else if(a==b&&a==c)
        {
            cout<<"Case "<<i+1<<": Equilateral"<<endl;
        }else if(a==b||a==c||c==b)
        {
            cout<<"Case "<<i+1<<": Isosceles"<<endl;
        }else{
            cout<<"Case "<<i+1<<": Scalene"<<endl;
        }
    }

    return 0;
}
