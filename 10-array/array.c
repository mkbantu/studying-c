#include <stdio.h>

int main() {
    int mark[3];

    mark[0] = 6;
    mark[1] = 7;
    mark[2] = 5;

    printf("marks for maths:%d\n", mark[0]);
    printf("marks for biologie:%d\n", mark[1]);
    printf("marks for chimie:%d\n", mark[2]);

    getchar();
    return 0;
}