#include <stdio.h>
#include <string.h>
int a[25][25],v[25],size;
void dfs(int src)
{
    v[src]=1;
    printf("%d->",src);
    for(int i=0;i<size;i++)
    if(a[src][i]==1&&v[i]==0)
    dfs(i);
}
int main()
{
    int src;
    printf("\nEnter size\n");
    scanf("%d",&size);
    printf("\nEnter adjacency matrix\n");
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    memset(v,0,sizeof(v));
    
    printf("Enter source vertex \n");
    scanf("%d",&src);
    printf("Reachable vertices : \n");
    dfs(src);
    
    return 0;
}
