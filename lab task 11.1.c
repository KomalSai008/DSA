#include <stdio.h>
int main() 
{
    int n, i, j, key;
    scanf("%d", &n);
    int arr[n];
       for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Insertion Sort (Descending)
    for(i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1; 

        while(j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    // Print result
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
