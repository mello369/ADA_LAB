
#include <stdio.h>
#include <string.h>
int main()
{
    
    char text[50],pattern[20];
    int l1,l2,flag=0,j;
    printf("Enter text  : \n");
    gets(text);
    printf("Enter pattern : \n");
    gets(pattern);
    l1=strlen(text);
    l2=strlen(pattern);
    for(int i=0;i<l1-l2;i++)
    
    {
        j=0;
        while(text[i+j]==pattern[j])
        {
            if(j==l2-1)
            {
                printf("\npattern found at %d",i+1);
                flag=1;
                break;
            }
            j++;
        }
    }
    if(flag==0)
    {
        printf("\npattern not found\n");
    }
    
    return 0;
}
