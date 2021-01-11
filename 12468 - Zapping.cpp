#include <iostream>
using namespace std;
int main()
{
    short int num1{0},num2{0};
    while( cin>>num1>>num2){
        if(num1==-1&&num2==-1)
        {
            break;
        }
        if(num1>num2){
            num1-=num2;
        } else{
            num1=num2-num1;
        }
        num2=100-num1;
        if(num1<num2)
            cout<<num1<<endl;
        else{
            cout<<num2<<endl;
        }
    }
    return 0;
}
