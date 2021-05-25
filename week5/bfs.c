
#include <stdio.h>
int a[20][20],vis[20],n;
void bfs(int src)
{
    int q[20],f=0,r=-1,v;
    q[++r]=src;
    vis[src]=1;
    while(f<=r)
    {
        v=q[f++];
        printf("%d ",v);
        for(int i=0;i<n;i++)
        {
            if(a[v][i]==1&&vis[i]!=1)
            {
                vis[i]=1;
                q[++r]=i;
            }
        }
    }
}

int main()
{
    int src;
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
    printf("Enter source vertex\n");
    scanf("%d",&src);
    printf("Nodes reachable from %d\n",src);
    bfs(src);
    return 0;
}
