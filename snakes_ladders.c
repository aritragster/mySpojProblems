#include <stdio.h>
int strL[101],endL[101],strS[101],endS[101],val[101];
int findMin(){
	int i,j;
	for(i=1;i<101;i++){
		if(i<7){
			val[i]=1;
			if(strL[i]>0)
			val[strL[i]]=1;
		} else {
			for (j=1;j<7;j++){
				if((val[i-j]+1)<val[i])
				val[i] = val[i-j]+1;
			}
			if(strL[i]>0){
				if(val[strL[i]]>val[i])
				val[strL[i]] = val[i];
			}
			if(strS[i]>0){
				if(val[strS[i]]>val[i]){
					val[strS[i]] = val[i];
					i = strS[i];
				}
			}
		}
	}
	return val[100];
}
void setAll(){
    int i;
    	for (i=0;i<101;i++){
		strL[i]=0;
		endL[i]=0;
		strS[i]=0;
		endS[i]=0;
		val[i]=9999;
	}
}
int main(void) {
	int i,T,N,M,temp1,temp2;
	scanf("%d",&T);
	while(T--){
        setAll();
		scanf("%d",&N);
		while(N--){
			scanf("%d %d",&temp1,&temp2);
			strL[temp1]=temp2;
			endL[temp2]=temp1;
		}
		scanf("%d",&M);
		while(M--){
			scanf("%d %d",&temp1,&temp2);
			strS[temp1]=temp2;
			endS[temp2]=temp1;
		}
		temp1 = findMin();
        if(temp1 == 9999)
		printf("%d\n",-1);
        else
        printf("%d\n",temp1);
	}
	return 0;
}
