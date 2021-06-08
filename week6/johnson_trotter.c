
#include <stdio.h>
#include <stdbool.h>
bool LEFT_TO_RIGHT = true;
bool RIGHT_TO_LEFT = false;


int getMobile(int a[], bool dir[], int n)
{
	int max = -1,maxIndex=-1;
	for(int i=0;i<n;i++)
	{
	    if(i<n-1)
	    {
	    if(dir[i]==LEFT_TO_RIGHT&&a[i]>a[i+1])
	    {
	        if(a[i]>max)
	        {
	            maxIndex = i;
	            max=a[i];
	        }
	    }
	    }
	    if(i>0)
	    {
	    if(dir[i]==RIGHT_TO_LEFT&&a[i]>a[i-1])
	    {
	        if(a[i]>max)
	        {
	            maxIndex = i;
	            max=a[i];
	        }
	    }
	    }
	}
	return maxIndex;
}






void singlePermutation(int a[],bool dir[],int n)
{
    int m = getMobile(a,dir,n);
    int max = a[m];
    int temp;
    bool temp1;
    
    
    if(dir[m]==LEFT_TO_RIGHT)
    {
        temp = a[m];
        temp1 = dir[m];
        a[m] = a[m+1];
        dir[m] = dir[m+1];
        dir[m+1] = temp1;
        a[m+1] = temp;
    }
    else
    {
        temp = a[m];
        temp1 = dir[m];
        a[m] = a[m-1];
        dir[m] = dir[m-1];
        dir[m-1] = temp1;
        a[m-1] = temp;
    }
    
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            if(dir[i]==LEFT_TO_RIGHT)
            dir[i]=RIGHT_TO_LEFT;
            else
            dir[i]=LEFT_TO_RIGHT;
        }
        printf("%d",a[i]);
    }
    printf("\n");
}

void printPermutation(int n)
{

	int a[100];

	bool dir[100];


	for (int i = 0; i < n; i++)
	{
		a[i] = i + 1;
		printf("%d",a[i]);
	}
    printf("\n");
    

	for (int i = 0; i < n; i++)
		dir[i] = RIGHT_TO_LEFT;
    int count=1;
    while(getMobile(a,dir,n)!=-1)
    {
        singlePermutation(a,dir,n);
        count++;
    }
    printf("\n%d permutations",count);
}

// Driver code
int main()
{
    int n;
	printf("Enter n\n");
	scanf("%d",&n);
	printPermutation(n);
	return 0;
}
