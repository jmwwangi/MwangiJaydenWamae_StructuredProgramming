#include <stdio.h>

int main() {
    int arr[6][4] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20},
        {21, 22, 23, 24}
    };

    printf("2D Array elements:\n");

    for (int i = 0; i < 6; i++) {        // rows
        for (int j = 0; j < 4; j++) {    // columns
            printf("%d ", arr[i][j]);
        }
        printf("\n");  // new line after each row
    }

    return 0;
}
