#include <stdio.h>
int main ()
{

    float a,b;
    printf("a is gross sales.\n b is net sales .");
    printf (" \n enter the value of a");
    scanf ("%f",&a);
    if (a>20000){
        b=a- a*0.15;
        printf("net sales is %f",b);
    } else if (a>10000){
         b=a-a*0.1;
         printf("net sales is %f",b);
    } else {
         b= a-a*0.05;
          printf("net sales is %f",b);}
}
