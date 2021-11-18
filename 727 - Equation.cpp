#include <bits/stdc++.h>
using namespace std;

void convert(char *infix);
int is_operator_out(char &c);
int is_operator_in(char &c);
bool is_number(char &c);

int main(){

    int test{0},count{0};
    scanf("%d",&test);

    cin.ignore();
    cin.ignore();
    while(test--){
        count++;
		if(count >1){
		    cout << endl;
		}
        char infix[52],i{0};
        string token;

        while(true){
            getline(cin, token);
			if (token.length() == 0 || !cin)
				break;
            
            infix[i] = token.at(0);
            i++;
        }

        infix[i] = '\0';

        convert(infix);

    }
    return 0;
}

void convert(char *infix){
    list<char> list1;
    char postfix[52] = {0};
    int i{0},j{0};

    while(infix[i] != 0){
        if(is_number(infix[i])){
            postfix[j++] = infix[i++];
        }else{
            if(list1.empty() || is_operator_out(infix[i]) > is_operator_in(list1.front())){
                list1.push_front(infix[i++]);
            }else{
                if(is_operator_in(list1.front()) == is_operator_out(infix[i])){
                    list1.pop_front();
                    i++;
                    continue;
                }
                postfix[j++] = list1.front();
                list1.pop_front();
            }
        }
    }
    while(!list1.empty()){
        if(is_operator_in(list1.front()) == -1){
            list1.pop_front();
            continue;
        }
        postfix[j++] = list1.front();
        list1.pop_front();
    }
    postfix[j] = '\0';
    printf("%s\n",postfix);
}

int is_operator_out(char &c){
    if(c == '+' || c == '-'){
        return 1;
    }else if(c == '*' || c == '/'){
        return 3;
    }else if(c == '('){
        return 10;
    }else{
        return -1;
    }
}

int is_operator_in(char &c){
    if(c == '+' || c == '-'){
        return 2;
    }else if(c == '*' || c == '/'){
        return 4;
    }else{
        return -1;
    }
}

bool is_number(char &c){
    if(c == '+' || c == '-' || c == '*' || c == '/' || c == '(' || c == ')'){
        return false;
    }else{
        return true;
    }
}
