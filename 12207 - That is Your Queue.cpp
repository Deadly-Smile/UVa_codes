#include<cstdio>
#include<string>
#include<iostream>
#include<vector>
#include<list>
#include <iterator>

using namespace std;

void initializer (long long int &population, short int &command,list<long long int> &my_list) {

    for(short int i = 1; i<=command && i<=population ; i++){
        my_list.push_back(i);
    }
}


int main()
{
    long long int population{0};
    short int command{0},count{1};
    char given_command;
    long long int emmag{0};
    while(scanf("%lli %hi",&population,&command)!=EOF)
    {
        if(population == 0 && command == 0){
            break;
        }else{
            list<long long int> my_list;
            initializer(population,command,my_list);
            list <long long int> :: iterator it;
            printf("Case %d:\n",count++);
            while(command--){
                getchar();
                scanf("%c",&given_command);
                if(given_command == 'N'){
                    it = my_list.begin();
                    if(it != my_list.end()){
                        cout<<*it<<endl;
                    }
                    my_list.push_back(*it);
                    my_list.pop_front();
                }else{
                    scanf(" %lli",&emmag);
                    
                    my_list.remove(emmag);
                    my_list.push_front(emmag);
                }
            }
        }
    }
    return 0;
}
