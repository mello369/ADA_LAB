

#include <stdio.h>

int gcd(int a,int b)
{
    if(a==0)
    return b;
    return gcd(b%a,a);
}
int main()
{
    int a,b,g;
    printf("Enter 1st number : \n");
    scanf("%d",&a);
    printf("\nEnter second number : \n");
    scanf("%d",&b);
    g = a<b?gcd(a,b):gcd(b,a);
    printf("GCD : %d",g);
    return 0;
}
