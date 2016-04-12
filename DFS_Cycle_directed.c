#include <stdio.h>
int G[5][5],N,visited[5],recur[5];
int dfs(int x){
	int i;
	visited[x]=1;
	recur[x]=1;
	for(i=0;i<5;i++){
		if(G[x][i]==1){
			if(recur[i]==1)
			return 1;
			if(visited[i]==0 && dfs(i)==1)
			return 1;
		}
	}
	recur[x]=0;
	return 0;
}
int main(){
    int i,j;
    for(i=0;i<5;i++){
    	for(j=0;j<5;j++){
    		G[i][j]=0;
    	}
    	visited[i]=0;
    	recur[i]=0;
    }
    N = 5;
    G[0][1]=1;
    G[1][3]=1;
    G[2][3]=1;
    G[0][4]=1;
    G[0][2]=1;
    G[3][0]=1;
    if(dfs(0) == 0)
    printf("No cycle in directed graph");
    else
    printf("Cycle is there in directed graph");
	return 0;
}
