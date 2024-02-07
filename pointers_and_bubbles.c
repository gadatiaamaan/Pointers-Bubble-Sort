#include <stdio.h>

#define MAX 9

// Function prototypes
void printValues(const int*);
void sort(int*);
void swap(int*, int*);

// Entry point of the program
int main() {
    int values[MAX] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

    printf("Before sorting:\n");
    printValues(values);

    sort(values);

    printf("After sorting:\n");
    printValues(values);

    return 0;
}

// Function to swap two integers using pointers
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Function to print array elements
void printValues(const int *arr) {
    printf("[");
    for (int i = 0; i < MAX; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

// Bubble sort implementation
void sort(int *arr) {
    for (int i = 0; i < MAX - 1; i++) {
        for (int j = 0; j < MAX - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                printValues(arr); // Print after each swap
            }
        }
    }
}
