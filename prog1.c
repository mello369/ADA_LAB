#include <stdio.h>
#include <stdlib.h>
void sort(int arr[])
{
    int temp;
    for(int i=0;i<10;i++)
    {
        for(int j=i;j<10;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main()
{
    int ch,num,flag,beg=0,end=9,mid;
    int arr[10];
    while(1)
    {
        printf("\n1.Linear Search\n2.Binary Search\n3.Exit\n");
        scanf("%d",&ch);
        for(int i=0;i<10;i++)
        {
            arr[i]=rand()%50;
        }
        printf("Array : \n");
        for(int i=0;i<10;i++)
        printf("%d ",arr[i]);
        printf("\nEnter element\n");
        scanf("%d",&num);
        
        switch(ch)
        {
            case 1:
            flag=0;
            
            for(int i=0;i<10;i++)
            {
                if(arr[i]==num)
                {
                   flag=1;
                   printf("\nElement Found at pos : %d\n",(i+1));
                }
            }
            if(flag==0)
            printf("\nElement not found\n");
            break;
            
            case 2:
            beg=0;
            end=9;
            sort(arr);
            flag=0;
            printf("Sorted Array : \n");
            for(int i=0;i<10;i++)
            printf("%d ",arr[i]);
            while(beg!=end)
            {
                mid=(beg+end)/2;
                if(arr[mid]==num)
                {
                    printf("\nElement found at pos : %d \n",(mid+1));
                    flag=1;
                    break;
                }
                else
                {
                    if(arr[mid]>num)
                    beg=mid-1;
                    else
                    end=mid+1;
                }
                
            }
            if(flag==0)
            {
                printf("\nElement not found\n");
            }
            break;
            default:return 0;
        }
        
    }

    return 0;
}
