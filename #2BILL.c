#include <stdio.h>
void main (voiud)
{

    float b, t ,d ,a;

    printf("ENTER THE BILL AND THEN ENTER THE % OF DOSCOUNT\n");
    scanf("%f%f",&b,&a);
    d=b*a/100;
    t=b-d;
    printf("    BILL:%.2fRS\nDISCOUNT:%.2fRS\n   TOTAL:%.2fRS",b,d,t);
}
/*
Program: to calculate the bill with discount
programmed by:*RANGREZ AAMIR*
*/
