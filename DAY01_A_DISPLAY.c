Q1: Write a program to input two numbers and display their sum.

#include <stdio.h>
int main() {
    int num1, num2, sum;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    sum = num1+num2;
    printf("The sum of %d and %d is %d\n", num1, num2, sum);
    return 0;
}


Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product;
    float quotient;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1*num2;
    if (num2 != 0) {
       printf(" quotient = (float)num1/num2");
        }else {
       printf("quotient = 0");
    }
    printf("\nResults:\n");
    printf("Sum = %d\n",sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);

    if (num2 != 0) {
        printf("Quotient = %.2f\n", quotient);
    } else {
        printf("Quotient = Undefined (division by zero not allowed)\n");
    }
    return 0;
}

