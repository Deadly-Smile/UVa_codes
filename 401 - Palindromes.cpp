#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,proxy;
    while(cin>>s){
        bool is_palen{false},is_image{false};
        proxy=s;
        reverse(begin(proxy),end(proxy));
        if(proxy==s){
            is_palen=true;
        }
        proxy=s;
        for(short int i=0;i<s.length();++i){
            if(s.at(i)=='B' || s.at(i)=='C' || s.at(i)=='D' || s.at(i)=='F' || s.at(i)=='G' || 
            s.at(i)=='K' || s.at(i)=='N' || s.at(i)=='P' || s.at(i)=='R' || s.at(i)=='Q' ||
            s.at(i)=='4' || s.at(i)=='7' || s.at(i)=='6' || s.at(i)=='9'){
                goto next;
                break;
            }else if(s.at(i)=='E'){
                s.at(i)='3';
            }else if(s.at(i)=='J'){
                s.at(i)='L';
            }else if(s.at(i)=='L'){
                s.at(i)='J';
            }else if(s.at(i)=='S'){
                s.at(i)='2';
            }else if(s.at(i)=='2'){
                s.at(i)='S';
            }else if(s.at(i)=='3'){
                s.at(i)='E';
            }else if(s.at(i)=='Z'){
                s.at(i)='5';
            }else if(s.at(i)=='5'){
                s.at(i)='Z';
            }
        }
        reverse(begin(s),end(s));
        if(proxy==s){
            is_image=true;
        }
        next:
        if(is_image && is_palen){
            cout<<proxy<<" -- is a mirrored palindrome.\n"<<endl;
        }else if(is_palen && !is_image){
            cout<<proxy<<" -- is a regular palindrome.\n"<<endl;
        }else if(!is_palen && is_image){
            cout<<proxy<<" -- is a mirrored string.\n"<<endl;
        }else if(!is_palen && !is_image){
            cout<<proxy<<" -- is not a palindrome.\n"<<endl;
        }
    }
    return 0;
}
