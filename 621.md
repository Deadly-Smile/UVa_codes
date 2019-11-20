#include <iostream>
#include <string>

using namespace std;
int main()
{
    int n{0};
    cin>>n;
    string s1{"1"},s4{"4"},s78{"78"},s{};
    for (int i = 0; i < n; ++i) {
        cin>>s;
        if(s==s1||s==s4||s==s78)
        {
            cout<<"+"<<endl;
        }else if (s==s4+"35"||s==s1+"35"||s==s78+"35")
        {
            cout<<"-"<<endl;
        }else if (s=="9"+s4+"4"||s=="9"+s1+"4"||s=="9"+s78+"4")
        {
            cout<<"*"<<endl;
        } else if (s=="190"+s4||s=="190"+s1||s=="190"+s78)
        {
            cout<<"?"<<endl;
        }
        else{
            cout<<"+"<<endl;
        }
    }
    return 0;
}
