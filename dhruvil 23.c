#include <stdio.h>
int main()
{
    float a,b,c,d,e;
    printf("a is maths marks.\n b is physics marks. \n c is chemistry marks.");
    printf("\n enter the value of a,b,c");
    scanf("%f%f%f",&a,&b,&c);
    d =a+b+c;
    e=d/3;
    printf("avrage of three subject of %f",e);
}
