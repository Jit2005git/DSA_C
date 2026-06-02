// #include <stdio.h>

// int binarySearch(int arr[], int n, int x) {
//     int low = 0;
//     int high = n-1;
//     while (low <= high) {
//         int mid = low + (high - low) / 2;

//         // Check if x is present at mid
//         if (arr[mid] == x)
//             return mid;

//         // If x greater, ignore left half
//         if (arr[mid] < x)
//             low = mid + 1;

//         // If x is smaller, ignore right half
//         else
//             high = mid - 1;
//     }

//     // If we reach here, then element was not present
//     return -1;
// }

// int main() {
//     int arr[] = { 2, 3, 4, 10, 40 };
//     int x = 10;
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int result = binarySearch(arr, n, x);
//     if(result == -1) printf("Element is not present in array");
//     else printf("Element is present at index %d",result);

// }
#include <stdio.h>

int binarySearch(int arr[], int n, int x) {
    int st = 0;
    int end = n-1;
    while (st <= end) { // Loop will run until st is less than or equal to end
        int mid = st + (end - st) / 2;

        // Check if x is present at mid
        if (arr[mid] == x)
            return mid;

        // If x greater, ignore left half
        if (arr[mid] < x)
            st = mid + 1;

        // If x is smaller, ignore right half
        else
            end = mid - 1;
    }

    // If we reach here, then element was not present
    return -1;
}

int main() {
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, n, x);
    if(result == -1) printf("Element is not present in array");
    else printf("Element is present at index %d",result);

}
