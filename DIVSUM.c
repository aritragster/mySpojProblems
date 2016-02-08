//This is to find the sum of all divisors of any given number.
//Find all the primes upto a certain limit, say 709
//Use the mathematical equation p(n)= (a^x - 1)/(a-1) * (b^y -1)/(b-1) where a , b represent prime notation of the number n.

//All the best

#include <stdio.h>
#define type long int

int prime[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499,503,509,521,523,541,547,557,563,569,571,577,587,593,599,601,607,613,617,619,631,641,643,647,653,659,661,673,677,683,691,701,709};
int main(void) {
	type prod, sum, count, T, i,n, temp, primecount;
	primecount= sizeof(prime)/sizeof(prime[0]);
	scanf("%ld", &T);
	while(T--) {
		scanf("%ld", &n);
		temp = n;

		prod =1;
		for(i =0,prod=1; i<primecount;i++){
	        count = 0;
			while(n>0){
				if(n%prime[i] == 0){
					count++;
					n = n/prime[i];
				} else {
					break;
				}
			}
			if(count > 1){
				sum=1;
				count++;
				while(count--){
				    sum*= prime[i];
			    }
			prod = prod*((sum-1)/(prime[i]-1));
			} else if (count ==1)
			prod*=prime[i]+1;
			
			if(n==1)
			break;
			
		}
		if(n>1){
			prod = prod*(n+1) - temp;
		} else {
			prod = prod - temp;
		}
		printf("%ld\n",prod);
	}
	return 0;
}
