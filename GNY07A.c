#include <stdio.h>
#include <string.h>
int main(void) {
	char c;
	int n,t,i, count;
	scanf("%d ",&t);
    for(i=1;i<=t;i++){
    	scanf("%d",&n);
    	c = getchar_unlocked();
    	count = 0;
    	printf("%d",i);
        while(c!='\n'){
        	if (count != n){
        		printf("%c",c);
        	}
        	c = getchar_unlocked();
        	count++;
        }
    	printf("\n");
    }
	return 0;
}
