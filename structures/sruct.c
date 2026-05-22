#include<stdio.h>
#include<string.h>

typedef struct {
    char name[25];
    int age;
}student;

int main() {
student s;

    printf("Enter name: ");
    scanf("%s", s.name);
    strcpy(s.name,"mukundabntu");

    printf("Enter age: ");
    scanf("%d", &s.age);

    printf("\nName: %s\n", s.name);
    printf("Age: %d\n", s.age);

    return 0;
}
