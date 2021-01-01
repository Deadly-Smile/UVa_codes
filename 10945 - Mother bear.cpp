# UVa_codes
Assignment for 1.2 S.P.L.S-2 
#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        if(s=="DONE")
            break;
        string t,h;
        bool flag{0};
        for (short int i = 0 ; i <s.length() ; ++i) {
            if((s.at(i)>='a' && s.at(i)<='z') || (s.at(i)>='A' && s.at(i)<='Z'))
            {
                h.push_back(s.at(i));
            }
        }
        for(short int i=0;i<h.length()/2;++i)
        {
            t.push_back(h.at(h.length()-i-1));
            if(!(h.at(i)==t.at(i) || h.at(i)==t.at(i)+32 || h.at(i)==t.at(i)-32))
            {
                flag=1;
                break;
            }
        }
        if(flag)
        {
            printf("Uh oh..\n");
        }else{
            printf("You won't be eaten!\n");
        }
    }
    return 0;
}
