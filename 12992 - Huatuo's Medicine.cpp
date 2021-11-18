#include <cstdio>
int main() {
	
	short int n{0};
	scanf("%hi",&n);
	for(short int i=1;i<=n;i++){
	    short int num{0};
	    scanf("%hi",&num);
	    printf("Case #%hi: %hi\n",i,num*2-1);
	}
	
	return 0;
}
