#include <stdio.h>

int main() {
    int arr[] = {2, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    //array reverse display

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nReversed array (display order only): ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    // array sum calculation
     int sum = 0;

     for (int i = 0; i < n; i++){
       sum = sum + arr[i] ;
     }
     printf("\nThe sum of the array elements are: %d", sum);

    return 0;
}
