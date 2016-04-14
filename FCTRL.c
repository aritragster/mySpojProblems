#include <stdio.h>

int main(void) {

    long long n,mul=5,sum=0,T;
    scanf("%lld",&T);
    while(T--){
    	scanf("%lld",&n);
    	mul=5;
    	sum=0;
	    while(n/mul>0){
	    	sum+= (n/mul);
	    	mul = mul*5;
	    }
		printf("%lld\n",sum);
    }
	return 0;
}

//Factorial question from SPOJ
//Very simple logic regarding trailing zeroes.
// logic can be seen from :: https://brilliant.org/wiki/trailing-number-of-zeros/
