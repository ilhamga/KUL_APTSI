#include <stdio.h>

int main() {
    char name[10]; /* name of student */
    int score; /* score of student */
    
    printf("Enter your name\n");
    scanf("%s", name); /* read student name */
    printf("Enter your score\n");
    scanf("%d", &score); /* read student score */
    
    if(score > 85) {
        /* if condition fulfilled */
        printf("%s mark is A\n", name);
    } else {
        /* if condition NOT fulfilled */
        printf("%s mark is NOT A\n", name);
    }

    return 0;
}
