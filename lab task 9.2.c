// Implementation of binary search.
#include <stdio.h>
void BinarySearch(int a[], int start, int end, int key) {

    while(start <= end) {

        int mid = (start + end) / 2;

        if(key == a[mid]) {
            printf("Key is found at index %d\n", mid);
            return; // fixed (no return value)
        }

        if(key < a[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    // if not found
    printf("Key not found\n");
}

int main() {

    int arr[5] = {10, 20, 30, 40, 50};

    BinarySearch(arr, 0, 4, 20); // fixed call

    return 0;
}
