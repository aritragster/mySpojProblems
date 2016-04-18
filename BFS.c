#include <stdio.h>
int G[1000][1000],queue[1000],front,rear,visited[1000],N,Ga;
void enqueue(int x){
	if(rear >1000){
		return;
	}
	rear = rear+1;
	queue[rear]=x;
	if(front == -1)
	front = 0;
}
int dequeue()
{
	if(front>rear || front == -1)
	return -1;
	front++;
	return queue[front];
}
int isEmpty()
{
	if(front>rear || front == -1)
	return 1;
	return 0;
}
void findDist()
{
	int i,x;
	for(i=0;i<N;i++)
		visited[i]=-1;
	visited[Ga]=1;
	enqueue(Ga);
	while(isEmpty() == 0){
		x = dequeue();
		for(i=0;i<N;i++)
		{
			if(G[x][i]==1 && visited[i]==-1){
				visited[i]=visited[x]*6;
				enqueue(i);
			}
		}
	}
}
void printAll()
{
	int i;
	for(i=0;i<N;i++)
	{
		if(i!=Ga)
		printf("%d ",visited[i]);
	}
	printf("\n");
}
int main(void) {
	int T,M,i,j,k;
	scanf("%d",&T);
	while(T--){
		scanf("%d %d",&N,&M);
		front = -1;
		rear = -1;
		for(i=0;i<M;i++)
		{
			scanf("%d %d",&j,&k);
			G[j-1][k-1]=1;
		}
		scanf("%d",&Ga);
		Ga--;
		findDist();
		printAll();
		
	}
	return 0;
}
