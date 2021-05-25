
#include <stdio.h>
int a[20][20],vis[20],n,flag,exp[20],j=0;
dfs(int src)
{
    

vis[src]=1;

for(int i=1;i<=n;i++)

{

if(a[src][i]==1 && vis[i]==0)

dfs(i);

}

exp[j++]=src;
}
int main()
{
    printf("Enter the number of vertices\n");
    scanf("%d",&n);
    printf("Enter adjacency matrix : \n");
    for(int i=0;i<n;i++)
    {
        
        
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for(int i=0;i<n;i++)
    {
        if(vis[i]!=1)
        {
            vis[i]=1;
            dfs(i);
        }
       
    }
    printf("topo sort : ");
    for(int i=n-1;i>=0;i--)
    printf(" %d ",exp[i]);
    

    return 0;
}
