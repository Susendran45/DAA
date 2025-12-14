#include <stdio.h>
#include <stdlib.h>
#define max 100
int queue[max],front=0,rear=0;
void enqueue(int x)
{
queue[rear++]=x;
}
int dequeue()
{
return queue[front++];
}
void BFS(int graph[][max],int visited[],int n,int start)
{
enqueue(start);
visited[start]=1;
while(front!=rear)
{
int node=dequeue();
printf("%d \t",node);
for(int i=0;i<n;i++)
{
if(graph[node][i]==1 && !visited[i])
{
visited[i]=1;
enqueue(i);
}}
}
printf("\n");
}
int main()
{
int graph[max][max]={
{0,1,1,0},
{1,0,1,1},
{1,1,0,1},
{0,1,1,0}
};
int visited[max]={0};
BFS(graph,visited,4,0);
return 0;
}

// Space complexity = O(V)
// Queue and visited array store vertices 
// Time complexity = O(V+E)
/* The worst case comes from where each vertex
is visited once and each edge is explored once, 
Queue operations take constant time */
