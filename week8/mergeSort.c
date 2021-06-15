
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void merge(int arr[],int low,int high)
{
    int temp[10000],mid = (low+high)/2,i=low,j,k=low;
    j=mid+1;
    while(i<=mid&&j<=high)
    {
        if(arr[i]<arr[j])
        temp[k++]=arr[i++];
        else
        temp[k++]=arr[j++];
    }
    while(i<=mid)
    temp[k++]=arr[i++];
    while(j<=high)
    temp[k++]=arr[j++];
    for(int i=low;i<=high;i++)
    arr[i]=temp[i];
}

void mergeSort(int arr[],int low,int high)
{
    if(low>=high)
    return;
    int mid  = (low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,high);
}


int main()
{
    clock_t start,end;
    int arr[10000],size;
    printf("enter size\n");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        arr[i]=rand()%10;
        printf("%d ",arr[i]);
    }
    start=clock();
    mergeSort(arr,0,size-1);
    end=clock();
    printf("\nSorted Array : \n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nTime Taken : %f",(double)(end-start)/CLOCKS_PER_SEC);
    return 0;
}
