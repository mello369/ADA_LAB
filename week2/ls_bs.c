
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void linear_search(int arr[],int n,int ele,int i)
{
    if(arr[i]==ele)
    {
        printf("Element found at %d",(i+1));
        return;
    }
    
    if(i==n-1)
    {
        printf("Element not found");
        return;
    }
    linear_search(arr,n,ele,i+1);
}

void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;
  
    // Storing start time
    clock_t start_time = clock();
  
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);
}

void sort(int arr[],int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("1\n");
}

void binary_search(int arr[],int start,int end,int ele)
{
    
    if(end<start)
    {
        printf("Element not found");
        return;
    }
    int mid=(start+end)/2;
    if(arr[mid]==ele)
    {
        printf("Element found at %d",(mid+1));
        return;
    }
    
    if(ele>arr[mid])
    start = mid+1;
    else
    end=mid-1;
    
    binary_search(arr,start,end,ele);
       
}
int main()
{
    int ch,arr[10000],ele;
    int n=200;
    time_t st,et;
    while(1)
    {
        printf("1.Linear Search\n2.Binary Search\n3.Exit");
        scanf("%d",&ch);
        for(int i=0;i<n;i++)
        {
            arr[i]=rand();
        }
        
        for(int i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
        switch(ch)
        {
            case 1:
            printf("Enter element : \n");
            scanf("%d",&ele);
            st = clock();
            linear_search(arr,n,ele,0);
            et = clock();
            printf("Time taken: %f \n", (double)(et - st) / CLOCKS_PER_SEC);
            break;
            case 2:
            printf("Enter element : \n");
            scanf("%d",&ele);
            st = clock();
            sort(arr,n);
            binary_search(arr,0,n-1,ele);
            et = clock();
            printf("Time taken: %f \n", (double)(et - st) / CLOCKS_PER_SEC);
            break;
            default:return 0;
        }
    }
    return 0;
}
