//# UVa_codes
//Problem ID. 673 - Parentheses Balance

#include <bits/stdc++.h>
#include <list>
using namespace std;
int main()
{
    int test{0};
    char v;
    scanf("%d",&test);
    scanf("%c",&v);
    while (test--){
        string s;
        getline(cin,s);
        list<char> list1;
        bool is_ok{true};
        for(int i = 0; s[i] != 0; i++){
            if(s[i] == '(' || s[i] == '['){
                list1.push_front(s[i]);
            }else if(s[i] == ')'){
                if(!list1.empty() && list1.front() == '('){
                    list1.pop_front();
                }else{
                    is_ok = false;
                    break;
                }
            }else if(s[i] == ']'){
                if(!list1.empty() && list1.front() == '['){
                    list1.pop_front();
                }else{
                    is_ok = false;
                    break;
                }
            }else{
                continue;
            }
        }
        if(!list1.empty() || !is_ok){
            printf("No\n");
        }else{
            printf("Yes\n");
        }

    }
    return 0;
}
