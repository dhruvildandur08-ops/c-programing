# include <stdio.h>
int main ()
{
    float i,p,r,t;
    printf("i is interest. \n p is principal ammount . \n r is rate. \n t is time period");
    printf("enter the value of  p,r,t");
    scanf("%f%f%f",&p,&r,&t);
    i =p*r*t /100;
    printf(" interest is %f",i);
}
