#include <stdio.h>

int main() {
    int countdown;
    
    printf("Remaining time till new year: ");
    scanf("%d", &countdown);
    
    while (countdown > 0) {
      printf("%d\n", countdown);
      countdown--;
    }
    
    printf("Happy New Year!!\n");
    return 0;
}
