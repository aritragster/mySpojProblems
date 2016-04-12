#include <stdio.h>
int G[5][5],N,visited[5];
void dfs(int x){
	int i;
	visited[x]=1;
	printf("%d\t",x);
	for(i=0;i<5;i++){
		if(visited[i]==0 && G[x][i]==1)
		dfs(i);
	}
}
int main(){
    int i,j;
    for(i=0;i<5;i++){
    	for(j=0;j<5;j++){
    		G[i][j]=0;
    	}
    	visited[i]=0;
    }
    N = 5;
    G[0][1]=1;
    G[1][3]=1;
    G[2][3]=1;
    G[0][4]=1;
    G[0][2]=1;
    dfs(0);
	return 0;
}
