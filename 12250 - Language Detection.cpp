# UVa_codes
Assignment for 1.2 S.P.L.S-2 
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main()
{
    string s;
    int n=1;
    while(cin>>s)
    {
        if(s=="#")
        {
            break;
        } else if(s=="HELLO")
        {
            cout<<"Case "<<n<<": ENGLISH"<<endl;
        }else if(s=="HOLA")
        {
            cout<<"Case "<<n<<": SPANISH"<<endl;
        }else if(s=="HALLO")
        {
            cout<<"Case "<<n<<": GERMAN"<<endl;
        }else if(s=="BONJOUR")
        {
            cout<<"Case "<<n<<": FRENCH"<<endl;
        }else if(s=="CIAO")
        {
            cout<<"Case "<<n<<": ITALIAN"<<endl;
        }else if(s=="ZDRAVSTVUJTE")
        {
            cout<<"Case "<<n<<": RUSSIAN"<<endl;
        } else
        {
            cout<<"Case "<<n<<": UNKNOWN"<<endl;
        }
        n++;
    }
    return 0;
}
