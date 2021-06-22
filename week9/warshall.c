#include <bits/stdc++.h>

int a[10][10], p[10][10], i,j,k,n,d[10][10];
void floyd()
{

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            d[i][j]=a[i][j];
        }
    }

    for(k=1;k<=n;k++)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(d[i][k]==1&&d[k][j]==1)
                d[i][j]=1;
            }

        }
    }

}





int main()

{

    printf("\nEnter number of vertices\n");
    scanf("%d",&n);
    printf("\nenter adjacency matrix\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    floyd();
    printf("\nPath Matrix\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        printf("%d ",d[i][j]);
        printf("\n");
    }
    return 0;
}
