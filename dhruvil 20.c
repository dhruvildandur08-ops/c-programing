#include <stdio.h>
int main()
{
    float h,b,a;
    printf(" h is height of triangle . \n b is base of triangle. \n a is area of triangle .");
    printf("\n enter the value of h,b");
    scanf("%f%f",&h,&b);
    a=h*b/2.0;
    printf(" \n area of triangle is %f",a);
}
