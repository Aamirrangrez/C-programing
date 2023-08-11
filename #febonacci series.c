#include<stdio.h>
#define pf printf
#define sf scanf
main()
{
    int a,b,c=0,d=1,e;
    pf("Enter a number:");
    sf("%d",&b);
    for(a=1;a<=b;a++)
    {
        if(a==1){pf("\nSeries is:\n");}
        pf("\t  %d\n",c);
        e=c+d;
        c=d;
        d=e;

    }
}

/*
working:To take input from user & display fabonacci series till inputed number.
programmed by:RANGREZ AAMIR
*/
