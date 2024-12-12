#include <stdio.h>

void calculateSum(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    printf("Sum of array elements: %d\n", sum);
}

int main(void) {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    calculateSum(arr, size);

    return 0;
}
