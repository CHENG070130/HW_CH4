#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int swapped;
    for (int pass = 0; pass < n - 1; pass++) {
        swapped = 0;
        for (int i = 0; i < n - 1 - pass; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) break;
    }
}

int main() {
    int arr[10] = { 10, 2, 8, 6, 7, 3, 5, 4, 9, 1 };
    int n = 10;
    bubbleSort(arr, n);
    printf("排序後的數列：");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
