
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selection_sort(int arr[],int n)
{
    int temp,pos,min;
    for(int i=0;i<n-1;i++)
    {
        min=arr[i];
        pos=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<min)
            {
                min = arr[j];
                pos = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[pos];
        arr[pos]= temp;
    }
}

void find_kth_largest(int arr[],int n, int k)
{
    printf("%d",arr[n-k]);
}

int main()
{
    
    clock_t start,end;
    int arr[10000],size,k;
    printf("Enter size\n");
    scanf("%d",&size);
    
    for(int i=0;i<size;i++)
    {
        arr[i]=rand();
        printf("%d ",arr[i]);
    }
    
    start = clock();
    selection_sort(arr,size);
    end = clock();
    printf("\nSorted array \n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nTime taken to sort : %f",(double)(end-start)/CLOCKS_PER_SEC);
    printf("\nEnter the value of K\n");
    scanf("%d",&k);
    printf("Kth largest element : \n");
    find_kth_largest(arr,size,k);
    return 0;
}
