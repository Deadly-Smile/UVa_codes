#include <iostream>
#include <string>

using namespace std;
int main()
{
    int n=0;
    cin>>n;
    for (size_t i = 0; i < n; ++i) {
        string s;
        cin>>s;
        size_t l=s.length();

        if(l==5)
        {
            cout<<"3"<<endl;
        }else if(l==3)
        {
            if(s.at(0)=='o'&&s.at(1)=='n') {
                cout << "1" << endl;
            } else if (s.at(0)=='o'&& s.at(2)=='e')
            {
                cout << "1" << endl;
            } else if (s.at(1)=='n'&&s.at(2)=='e')
            {
                cout << "1" << endl;
            }else{
                cout << "2" << endl;
            }
        }
    }
    return 0;
}
