
#include <stdio.h>

int main ()

{
    int first,second,third,fourth, i;
    float principal,rate,time, f;
    char keyval1,keyval2, c;
    double d;
    
    printf("Enter an integer\n");
    scanf("%d",&first);
    flushall();
    
    printf("\nEnter 3 integers\n");
    scanf("%d %d %d",&second,&third,&fourth);
    flushall();
    
    printf("\nEnter decimal values for principal, rate and time respectively\n");
    scanf("%f %f %f",&principal,&rate,&time);
    flushall();
    
    printf("\nEnter two characters for keyval1 and keyval2\n");
    scanf("%c %c",&keyval1,&keyval2);
    flushall();
    
    printf("\nFinally enter a character for variable c, and integer for variable i\nand a decimal value for float f and float d\n");
    scanf("%c %d %f %lf",&c,&i,&f,&d);
    flushall();
    
    printf("\n\nfirst is %d\nsecond is %d\nthird is %d\nfourth is %d\nprincipal is %f\nrate is %f\ntime is %f\nkeyval1 is %c\nkeyval2 is %c\nc is %c\ni is %d\nf is %f\nd is %lf", first, second, third, fourth, principal, rate, time, keyval1, keyval2, c, i, f, d);
    
    getchar();
    
    return 0;
    
}
    