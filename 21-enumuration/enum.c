#include <stdio.h>

enum Month {
    JANUARY = 1, FEBRUARY, MARCH,
    APRIL,       MAY,      JUNE,
    JULY,        AUGUST,   SEPTEMBER,
    OCTOBER,     NOVEMBER, DECEMBER
};

int main() {
    int a = MAY;
    printf("the index of may is %d\n", a);
    return 0;
}