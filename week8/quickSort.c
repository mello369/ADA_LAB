
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int partition(int arr[],int low, int high)
{
    int i=low+1,j=high,pivot=arr[low],temp;
    while(i<=j)
    {
        while(arr[i]<=pivot)
        i++;
        while(arr[j]>pivot)
        j--;
        if(i<j)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            
        }
        
    
        
    }
    arr[low]=arr[j];
    arr[j]=pivot;
    
    return j;
    
    
}

void quickSort(int arr[],int low,int high)
{
    if(low>=high)
    return;
    int pivot = partition(arr,low,high);
    quickSort(arr,low,pivot-1);
    quickSort(arr,pivot+1,high);
    
}


int main()
{
    clock_t start,end;
    int arr[10000],size;
    printf("enter size\n");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        arr[i]=rand();
        printf("%d ",arr[i]);
    }
    start=clock();
    quickSort(arr,0,size-1);
    end=clock();
    printf("\nSorted Array : \n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nTime Taken : %f",(double)(end-start)/CLOCKS_PER_SEC);
    return 0;
}
