// program to obtain the Topological ordering of vertices in a given digraph.

#include<stdio.h>
#include<time.h>

void findindegree(int a[10][10],int indegree[10],int n)
{
int i,j,sum;
for(j=1;j<=n;j++)
 {
 sum=0;
 for(i=1;i<=n;i++)
  sum=sum+a[i][j];
 indegree[j]=sum;
 }
}

void topological(int n,int a[10][10])
{
  int i,k,u,v,top,t[100],stack[20],indegree[20];
    k=1;
    top=-1;
findindegree(a,indegree,n);
for(i=1;i<=n;i++)
  {
   if(indegree[i]==0)
 stack[++top]=i;
}
   while(top!=-1){
   u=stack[top--];
   t[k++]=u;

   for(v=1;v<=n;v++)
{
 if(a[u][v]==1)
{
indegree[v]--;
 if(indegree[v]==0)
stack[++top]=v;
  }
 }
}
printf("The Topological sequence is:\n");
   for(i=1;i<=n;i++)
printf("%d ",t[i]);
 }
 int main()
{
int a[10][10],i,j,n;
clock_t start,end;
  double time;
printf("Please Enter the number of nodes:");
scanf("%d",&n);
printf("Please Enter the adjacency matrix:\n");
   for(i=1;i<=n;i++){
   for(j=1;j<=n;j++)
scanf("%d",&a[i][j]);
}
  start=clock();
   topological(n,a);
   end=clock();
   time=((double)(end-start))/CLOCKS_PER_SEC;
printf("\nThe Time taken=%1f",time);

}

