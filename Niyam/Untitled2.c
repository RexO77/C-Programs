#include<stdio.h>
#include<conio.h>
int parent[10];
void main()
{
int mincost=0,cost[10][10],n,i,j,ne,a,b,min,u,v;
printf("enter the no of vertices\n");
scanf("%d",&n);
printf("enter the cost matrix\n");
for(i=1;i<=n;i++)
 for(j=1;j<=n;j++)
  {
   scanf("%d",&cost[i][j]);
   if(cost[i][j]==0)
       cost[i][j]=9999;
  }
ne=1;
while(ne<n)
{
  for(min=9999,i=1;i<=n;i++)
    for(j=1;j<=n;j++)
     if(cost[i][j]<min){
       min=cost[i][j];
       a=u=i;
       b=v=j;
     }
    while(parent[u])
       u=parent[u];
    while(parent[v])
       v=parent[v];
       if(v!=u){
       printf("%d edge(%d,%d)=%d\n",ne++,a,b,min);
       mincost+=min;
       parent[v]=u;
       }
       cost[a][b]=cost[b][a]=999;
}
printf("\nThe minimum cost is %d\n",mincost);
getch();
}
