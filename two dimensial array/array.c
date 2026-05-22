#include <stdio.h>

int main() {
    // array two dimension;
    
    int mark[3][3];

    mark[0][0] = 6;
    mark[1][0] = 7;
    mark[2][0] = 5;

    mark[0][1] = 2;
    mark[1][1] = 7;
    mark[2][1] = 8;

    mark[0][2] = 5;
    mark[1][2] = 8;
    mark[2][2] = 9;

    printf("marks for maths:%d\n", mark[0][0]);
    printf("marks for biologie:%d\n", mark[1][0]);
    printf("marks for chimie:%d\n", mark[2][0]);

    printf("marks for maths:%d\n", mark[0][1]);
    printf("marks for biologie:%d\n", mark[1][1]);
    printf("marks for chimie:%d\n", mark[2][1]);

    printf("marks for maths:%d\n", mark[0][2]);
    printf("marks for biologie:%d\n", mark[1][2]);
    printf("marks for chimie:%d\n", mark[2][2]);

    getchar();
    return 0;
}