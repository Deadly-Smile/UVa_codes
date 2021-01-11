#include <iostream>
#include <string>

using namespace std;
int main()
{
    string s;
    size_t i=1;
    while (cin>>s)
    {
        if(s=="*"){
            break;
        }
        if(s=="Hajj")
        {
            cout<<"Case "<<i<<": Hajj-e-Akbar"<<endl;
        } else if(s=="Umrah")
        {
            cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;
        }
        i++;
    }
    return 0;
}
