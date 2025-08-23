#include <stdio.h>

int main()
 {
    float a,b,c,d;
    printf("a is gross salary. \n b is allowance.\n c is deduction .\n d is net salary.");
    printf("Enter the value of a ");
    scanf("%f", &a);
    b = a * 0.10;
    c = a * 0.03;
    d = a+ b - c ;
    printf("Gross Salary: %.2f\n", a);
    printf("Allowance : %.2f\n", b);
    printf("Deduction : %.2f\n", c);
    printf("Net Salary: %.2f\n", d);
}
