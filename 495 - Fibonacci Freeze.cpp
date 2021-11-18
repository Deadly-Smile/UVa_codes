#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(false);    cin.tie(NULL);
#define testCase int test{0};   cin>>test;  while(test--)

string arr[5000] = {"0","1","1"};

string sumation(string str1, string str2){ 
    if (str1.length() > str2.length()) 
        swap(str1, str2); 
  
    string str = ""; 
  
    int n1 = str1.length(), n2 = str2.length(); 
    int diff = n2 - n1; 
  
    int carry = 0; 
  
    for (int i=n1-1; i>=0; i--) 
    {
        int sum = ((str1[i]-'0') + 
                   (str2[i+diff]-'0') + 
                   carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
  
    for (int i=n2-n1-1; i>=0; i--) 
    { 
        int sum = ((str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
  
    if (carry) 
        str.push_back(carry+'0'); 
  
    reverse(str.begin(), str.end()); 
  
    return str; 
}

string fibonicci(short i){
    if(arr[i].length() != 0){
        return arr[i];
    }
    if(i > 2){
        string s = sumation(fibonicci(i-1),fibonicci(i-2));
        arr[i] = s;
        return s;
    }
}


int main()
{
    FastIO
    short n{0};
    while(cin>>n){
        std::cout <<"The Fibonacci number for "<<n<<" is "<< fibonicci(n) << std::endl;
    }
    
    return 0;
}
