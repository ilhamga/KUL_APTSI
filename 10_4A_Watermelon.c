#include <stdio.h>
 
int main() {
    int number;
 
    // Reading an integer from the user
    scanf("%d", &number);
 
    // Checking if the number is divisible by 2
    if (number % 2 == 0 && number > 2) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
 
    return 0;
}
