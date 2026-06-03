#include <stdio.h>

void merge(int arr[], int st, int mid, int end) {
    int temp[end - st + 1];

    int i = st;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    while (j <= end) {
        temp[k++] = arr[j++];
    }

    for (i = st, k = 0; i <= end; i++, k++) {
        arr[i] = temp[k];
    }
}

void mergesort(int arr[], int st, int end) {
    if (st < end) {
        int mid = st + (end - st) / 2;

        mergesort(arr, st, mid);
        mergesort(arr, mid + 1, end);

        merge(arr, st, mid, end);
    }
}

int main() {
    int arr[] = {6, 3, 9, 5, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergesort(arr, 0, n - 1);

    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}