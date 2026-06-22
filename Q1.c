#include<stdio.h>

#define INF 999

int main()
{
int n,i,j,start;
int graph[20][20];
int distance[20],visited[20];

printf("Enter number of locations: ");
scanf("%d",&n);

printf("Enter distance matrix:\n");

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&graph[i][j]);

if(graph[i][j]==0)
graph[i][j]=INF;
}
}

printf("Enter starting location: ");
scanf("%d",&start);


for(i=0;i<n;i++)
{
distance[i]=graph[start][i];
visited[i]=0;
}

distance[start]=0;


for(i=0;i<n;i++)
{
int min=INF,u;

for(j=0;j<n;j++)
{
if(!visited[j] && distance[j]<min)
{
min=distance[j];
u=j;
}
}

visited[u]=1;


for(j=0;j<n;j++)
{
if(!visited[j] && distance[u]+graph[u][j]<distance[j])
{
distance[j]=distance[u]+graph[u][j];
}
}

}


printf("\nShortest delivery routes:\n");

for(i=0;i<n;i++)
{
printf("Location %d = %d\n",i,distance[i]);
}


return 0;
}
Input
Enter number of locations: 4

Enter distance matrix:
0 10 15 20
10 0 5 10
15 5 0 8
20 10 8 0

Enter starting location: 0
Output
Shortest delivery routes:

Location 0 = 0
Location 1 = 10
Location 2 = 15
Location 3 = 20
