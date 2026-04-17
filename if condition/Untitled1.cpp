#include <stdio.h>
#include <string.h>

int main() {
    int age, marks;
    char sex;
    char nationality[50];

    printf("\nPlease enter your age: ");
    scanf("%d", &age);

    printf("\nPlease enter your marks: ");
    scanf("%d", &marks);

    printf("\nPlease enter your sex (F or M): ");
    scanf(" %c", &sex);   // space before %c is important

    printf("\nPlease enter your nationality: ");
    scanf("%s", nationality);

    if (age >= 30) {
        if (marks >= 50) {
            if (sex == 'F' || sex == 'f') {
                if (strcmp(nationality, "european") == 0) {
                    printf("recruited");
                } else {
                    printf("you are not recruited");
                }
            } else {
                printf("you are not recruited");
            }
        } else {
            printf("you are not recruited");
        }
    } else {
        printf("you are not recruited");
    }

    return 0;
}