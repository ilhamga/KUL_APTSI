#include <stdio.h>

int main() {
    char name[10]; /* name of person */
    int countryCode; /* country calling code */
    
    printf("Enter your name\n");
    scanf("%s", name); /* read person name */
    printf("Enter your country code\n");
    scanf("%d", &countryCode); /* read country calling code */
    
    switch(countryCode) {
        case 62:
            // if code 62
            printf("%s is from Indonesia.\n", name);
            break;
        case 81:
            // if code 81
            printf("%s is from Japan.\n", name);
            break;
        case 52:
            // if code 52
            printf("%s is from Mexico.\n", name);
            break;
        default:
            // if code not listed / default output
            printf("%s is from other nations.\n", name);
    }

    return 0;
}
