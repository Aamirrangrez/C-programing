#include<stdio.h>
#define pf printf
#define sf scanf
main()
{
    int a,b,c=1;
    pf("Enter a number:");
    sf("%d",&a);
    for(b=1;b<=a;b++)
    {
        c=c*b;
    }
    pf("factorial is:%d",c);
    fflush("stdin");
    scanf("%d",&a);
}
/*
working:To take input from user, calculate & display the factorial of inputed number.
programmed by:RNAGREZ AAMIR
*/
