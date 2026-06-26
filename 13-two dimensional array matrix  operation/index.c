#include <stdio.h>

int main() {

    // Declaring and initializing a 2D array
    int num[4][3] = {
        {1, 3, 18},
        {1, 46, 5},
        {20, 11, 72},
        {6, 7, 100}
    };

    for(int i = 0; i < 4; i++) {

        for(int j = 0; j < 3; j++) {

            printf("%d ", num[i][j]);
        }

        printf("\n");
    }

    int multiplied[4][3];

    // Loop to multiply each element of num by 5 and store in multiplied
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 3; j++) {
            multiplied[i][j] = num[i][j] * 5;
        }
    }

    // Loop to display multiplied array
    printf("\nMultiplied by 5:\n");
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", multiplied[i][j]);
        }
        printf("\n");
    }

    return 0;
}
