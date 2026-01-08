#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        for (int i = 0; i < n; i++) {
            printf(" %d ", arr[i]);
        }
        printf("\n");
    }

    printf("\n");
}

int main() {
    int n;
    int arr[] = {9,1,8,2,7,3,6,4,5};

    n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);

    return 0;
}