#include <stdio.h>
int main ()
{
    float a,b,c,d;
    printf("a is bytes.\n b is KB.\n c is MB.\n d is GB.");
    printf ("\n enter the value of a ");
    scanf("%f",&a);
    b = a/1024;
    c = b/1024;
    d = c/1024;
    printf ("\n KB is %f",b);
    printf("\n MB is %f",c);
    printf("\n GB is %f",d);
}
