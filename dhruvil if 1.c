#include <stdio.h>
int main ()
{
    int  a,b;
    printf("enter the value of a,b");
    scanf("%d%d",&a,&b);
    if (a>b){
    printf("largest = %d",a);
    printf("smallest =%d",b);
    } else if  (b>a){
     printf("largest = %d",b);
     printf("smallest = %d",a);
     } else {
     printf("both value are equal");}

}
