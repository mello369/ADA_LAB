
#include <stdio.h>
int a[20][20],vis[20],n,flag;
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
    for(int l=0;l<n;l++){
        
    
    for(int i=0;i<n;i++)
    {
        flag=0;
        if(vis[i]==1)
        continue;
        for(int j=0;j<n;j++)
        {
            if(a[j][i]==1)
            {
                flag=1;
                
            }
        }
        if(flag==0)
        {
            vis[i]=1;
            printf("%d ",i);
            for(int k=0;k<n;k++)
            {
                a[i][k]=0;
            }
        }
    }
    }
    

    return 0;
}
