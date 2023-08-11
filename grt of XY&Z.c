#include <stdio.h>
void main (void)
{
    int x,y,z;
    printf("Enter 3 numbers u will display which one is greater\n");
    scanf("%d%d%d",&x,&y,&z);
    if (x>y && x>z)
    {
        printf("%d is the greater",x);
    }
    else
    {
        if (y<x && y<z)
        {
            printf("%d is greater",y);
        }
        else
        {
            printf("%d is greater",z);
        }
    }
}
