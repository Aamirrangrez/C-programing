#include<stdio.h>
#define pf printf
void main(void)
{
    int x,y,z;
    pf("Enter a number to display table of it:");
    scanf("%d",&z);
    for(x=1;x<=10;x++)
    {
        y=z*x;
        printf("%dx%d=%d\n",z,x,y);


    }
    fflush(stdin);
    scanf("%d",&z);
    /*
    work: To take input from user & display table of it.
    programmed by: RANGREZ AAMIR  
    */


}

output: 5
5x1=5
5x2=10
5x3=15
5x4=20
5x5=25
5x6=30
5x7=35
5x8=40
5x9=45
5x10=50
