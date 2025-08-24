#include <stdio.h>
int main ()
{
    float a,b;
    printf("a is gross salary.\n b is net salary");
    printf("\n enter the value of a ");
    scanf("%f",&a);
    if (a>10000){
        b =a+ a*0.01 -a*0.03;
        printf("net salary is %f",b);
    } else if (a>5000) {
        b =a+ a*0.07 -a*0.02;
        printf("net salary is %f",b);
    } else {
      printf("net salary =%f",a);
      }
}
