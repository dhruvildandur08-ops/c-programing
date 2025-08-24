#include <stdio.h>
int main()

{
    int a,b,c ;
    printf("enter the value of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    if  (a>b&&a>c){
    printf("largest =%d",a);
    } else if (b>a&&b>c){
    printf("largest =%d",b);
    } else {
    printf("largest =%d",c);}
    if (a<b&&a<c){
    printf("\n smallest =%d",a);
    } else if (b<a&&b<c){
    printf("\n smallest =%d",b);
    } else {
    printf("\n smallest = %d",c);}
    if (a=sNb=c){
        printf("\n  all thtee values are equal");
    }
}
