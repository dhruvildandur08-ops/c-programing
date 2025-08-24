#include <stdio.h>

int main() {
    float a,b,c,total,average;
    printf("Enter the value of a,b,c");
    scanf("%f%f%f",&a,&b,&c);
    total = a+b+c;
    average = total / 3.0;
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);
    if (a < 35 || b < 35 || c < 35) {
        printf("Result: FAIL\n");
    }
    else {
        if (average >= 70) {
            printf("Result: DISTINCTION\n");
        }
        else if (average >= 60) {
            printf("Result: FIRST CLASS\n");
        }
        else if (average >= 50) {
            printf("Result: SECOND CLASS\n");
        }
        else if (average >= 35) {
            printf("Result: THIRD CLASS\n");
        }
        else {
            printf("Result: FAIL\n");
        }
    }
}
