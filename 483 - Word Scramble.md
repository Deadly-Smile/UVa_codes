# UVa_codes
Assignment for 1.2 S.P.L.S-2 
Problem:-483 - Word Scramble
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char c;
    while(getline(cin,s)){
        string word;
        for(short int i=0;i<s.length();++i){
            if(s[i]==' '){
                cout<<s[i];
            }else{
                string word;
                for(short int j=i;j<s.length() && s[j]!=' ';j++,i++){
                    c=s[j];
                    word.push_back(c);
                }
                reverse(begin(word),end(word));
                cout<<word;
                i--;
            }
        }
        cout<<endl;
    }
    return 0;
}
