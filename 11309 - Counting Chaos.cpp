#include<iostream>
using namespace std;
bool isPalendrom(string str,int i,int j){
    for(;i<j;i++,j--){
        if(str[i]!=str[j]) return false;
    }return true;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        int hh,mm;
        char ch;
        cin>>hh>>ch>>mm;
        mm++;
        while(true){
            string str="0000";
            if(mm>=60){
                mm=0;
                hh++;
            }if(hh>=24){
                hh=0;
            }
            int digitCount,ind=0;
            bool Leading=true;
            if(hh/10!=0||!Leading){
                Leading=false;
                str[ind]=(hh/10)+'0';
                ind++;
            }if(hh%10!=0||!Leading){
                Leading=false;
                str[ind]=(hh%10)+'0';
                ind++;
            }if(mm/10!=0||!Leading){
                Leading=false;
                str[ind]=(mm/10)+'0';
                ind++;
            }if(mm%10!=0||!Leading){
                Leading=false;
                str[ind]=(mm%10)+'0';
                ind++;
            }//str[ind]='\0';
            //cout<<str<<endl;
            if(isPalendrom(str,0,ind-1)){
                char result[6];
                if(ind==0){
                    result[0]='0';
                    result[1]='0';
                    result[2]=':';
                    result[3]='0';
                    result[4]='0';
                }
                if(ind==1){
                    result[0]='0';
                    result[1]='0';
                    result[2]=':';
                    result[3]='0';
                    result[4]=str[0];
                }else if(ind==2){
                    result[0]='0';
                    result[1]='0';
                    result[2]=':';
                    result[3]=str[0];
                    result[4]=str[1];
                }else if(ind==3){
                    result[0]='0';
                    result[1]=str[0];
                    result[2]=':';
                    result[3]=str[1];
                    result[4]=str[2];
                }else{
                    result[0]=str[0];
                    result[1]=str[1];
                    result[2]=':';
                    result[3]=str[2];
                    result[4]=str[3];
                }
                result[5]='\0';
                cout<<result<<endl;
                break;
            }mm++;
        }
    }
}
