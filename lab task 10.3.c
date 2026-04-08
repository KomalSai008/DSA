#include <stdio.h>

int countLessOrEqual(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] <= key) {
            result = mid;       
            low = mid + 1;     
        } else {
            high = mid - 1;    
        }
    }

    return result + 1;
}

int main() {
    int n,i, key;

    scanf("%d", &n);

    int arr[n];
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    int count = countLessOrEqual(arr, n, key);

    printf("%d", count);

    return 0;
}
