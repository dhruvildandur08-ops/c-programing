#include <stdio.h>
int main()
{
    float l,a,p;
    printf(" l is lengh of square's side. \n a is area of square. \n p is perimeter of square. ");
    printf("\n enter tthe value of l");
    scanf("%f",&l);
    a = l*l;
    p= l*4;
    printf("\n area of square is %f",a);
    printf(" \n perimeter of square %f",p);
}
