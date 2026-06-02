#include<stdio.h>
#include<stdlib.h>
int recursivebinarySearch(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return recursivebinarySearch(arr, l, mid - 1, x);
        return recursivebinarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 6;
    int result = recursivebinarySearch(arr, 0, n - 1, x);
    if (result == -1)
        printf("Element not found in array\n");
    else
        printf("Element found at index %d\n", result);
    return 0;
}   