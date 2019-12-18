# UVa_codes
Assignment for 1.2 S.P.L.S-2 
#include <iostream>
using namespace std;

int main() {
	short int n{0};
	scanf("%hi",&n);
	while(n--)
	{
	    short int num{0};
	    scanf("%hi",&num);
	    short int min{5000},max{-5000};
	    while(num--){
	        short int spot{0};
	        scanf("%hi",&spot);
	        if(min>spot){
	            min=spot;
	        }if(max<spot){
	            max=spot;
	        }
	    }
	    max=2*(max-min);
	    printf("%hi\n",max);
	}
	
	return 0;
}
