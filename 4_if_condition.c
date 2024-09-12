#include <stdio.h>

int main() {
    
    int num1; /* first number to be read from user */
    int num2; /* second number to be read from user */
    
    printf("Enter two integers, and I will tell you\n");
    printf("the relationships they satisfy: ");
    
    scanf("%d%d", &num1, &num2); /* read two integers */
    
    if(num1 == num2) {
        // both numbers are equal
        printf("%d is equal to %d\n", num1, num2);
    }
    if(num1 != num2) {
        // both numbers are not equal
        printf("%d is not equal to %d\n", num1, num2);
    }
    if(num1 < num2) {
        // num1 smaller than num2
        printf("%d is less than %d\n", num1, num2);
    }
    if(num1 > num2) {
        // num1 bigger than num2
        printf("%d is greater than %d\n", num1, num2);
    }
    if(num1 <= num2) {
        // num1 smaller or equal to num2
        printf("%d is less than or equal to %d\n", num1, num2);
    }
    if(num1 >= num2) {
        // num1 bigger or equal to num2
        printf("%d is greater than or equal to %d\n", num1, num2);
    }
    
    return 0;
}
