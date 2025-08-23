#include <stdio.h>
int main ()
{
    float l,b,a,p;
    printf("i is lengh of rectangle .\n b is width of rectangle .\n a is area of rectangle .\n p is perimeter of rectangle .");
    printf(" enter the value of l and b .");
    scanf("%f%f",&l ,&b);
    a= l*b ;
    p=2*(l+b);
    printf("\n area of rectangle is %f",a);
    printf("\n perimeter of rectangle %f",p);

}
