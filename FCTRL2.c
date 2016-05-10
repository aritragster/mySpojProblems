#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
		int i=0,j,n,k=0,carry,a[1000]={1};
		scanf("%d",&n);
		for(i=1;i<=n;i++){
			for(j=0;j<=k;j++){
				a[j] = a[j]*i + carry;
				carry = a[j]/10;
				a[j] = a[j]%10;
			}
			while(carry){
				k++;
				a[k] = carry%10;
				carry = carry/10;
			}
			
		}
		for(i=k;i>=0;i--){
			printf("%d",a[i]);
		}
		printf("\n");
	}
	return 0;
}
