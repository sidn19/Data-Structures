#include<stdio.h>
int G[20][20],q[20],visited[20],n,i,j,front=0,rear=-1;

void DFS(int i) {
    int j;
    printf("%d ",i);
    visited[i]=1;
    for(j=0;j<n;j++)
    if(!visited[j]&&G[i][j]==1)
    DFS(j);
}

void BFS(int v,int initialV) {
    if(!visited[v])
    printf("%d ",v);
    for (i=0;i<n;i++)
    if(G[v][i] && !visited[i])
    q[++rear]=i;
    if(front<=rear) {
        if(!visited[q[front]] && q[front]!=initialV)
        printf("%d ",q[front]);
        visited[q[front]]=1;
        BFS(q[front++],initialV);
    }
}

int main()
{
    int i,j,v;
    printf("ENTER THE NO. OF VERTICES:\n");
    scanf("%d",&n);
    printf("ENTER ADJACENCY MATRIX OF THE GRAPH:\n");
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%d",&G[i][j]);
    printf("ENTER THE STARTING VERTEX;\n");
    scanf("%d",&v);
    for(i=0;i<n;i++)
    visited[i]=0;
    printf("DFS:\n");
    DFS(v);
    for(i=0;i<n;i++)
    visited[i]=0;
    printf("\nBFS:\n");
    BFS(v,v);
    return 0;
}

/*
OUTPUT:

ENTER THE NO. OF VERTICES:
4
ENTER ADJACENCY MATRIX OF THE GRAPH:
0 1 0 1
1 0 1 0
0 1 0 1
1 0 1 0
ENTER THE STARTING VERTEX;
1
DFS:
1 0 3 2
BFS:
1 0 2 3
*/
