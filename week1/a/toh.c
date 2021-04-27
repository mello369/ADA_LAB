#include <stdio.h>

void toh(int num, char f, char t, char a)
{
    if (num == 1)
    {
        printf("\n Move disk 1 from tower %c to tower %c", f, t);
        return;
    }
    toh(num - 1, f, a, t);
    printf("\n Move disk %d from tower %c to tower %c", num, f, t);
    toh(num - 1, a, t, f);
}

 
int main()
{
    int num;
 
    printf("Enter number of disks : ");
    scanf("%d", &num);
    printf("Steps : \n");
    toh(num, 'A', 'C', 'B');
    return 0;
}
