#include <stdio.h>

#define BUFFER_SIZE 5   

int buffer[BUFFER_SIZE];
int index = 0;   
int count = 0;   


void insertSample(int value) {
    buffer[index] = value;
    index = (index + 1) % BUFFER_SIZE;  
    if (count < BUFFER_SIZE) {
        count++;
    }
}


void printSamples() {
    if (count == 0) {
        printf("Buffer is empty.\n");
        return;
    }

    int start = (index - count + BUFFER_SIZE) % BUFFER_SIZE; 
    printf("Stored samples (oldest → newest): ");
    for (int i = 0; i < count; i++) {
        int pos = (start + i) % BUFFER_SIZE;
        printf("%d ", buffer[pos]);
    }
    printf("\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert new sample\n");
        printf("2. Print samples\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter sample value: ");
                scanf("%d", &value);
                insertSample(value);
                break;
            case 2:
                printSamples();
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}
