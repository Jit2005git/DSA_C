#include <stdio.h>


void merge(int arr[], int st, int mid, int end) {
    int i, j, k;
    int n1 = mid - st + 1;
    int n2 = end - mid;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[st + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    k = st;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
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