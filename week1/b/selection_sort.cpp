

#include <time.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
    clock_t start,end;
    int arr[10000],min,pos,temp,size;
    cout<<"Enter size ";
    cin>>size;
    cout<<"Array : ";
    for(int i=0;i<size;i++)
    {
        arr[i]=rand()%1000;
        cout<<arr[i]<<" ";
    }
    

    start = clock();
    
    for(int i=0;i<size-1;i++)
    {
        pos=i;
        for(int j=i+1;j<size;j++)
        if(arr[j]<arr[pos])
        pos=j;
        temp = arr[i];
        arr[i]=arr[pos];
        arr[pos]=temp;
    }
    end = clock();
    cout<<"\nSorted Array\n";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nTime Taken : "<<(double)(end-start)/CLOCKS_PER_SEC;
    return 0;
}
