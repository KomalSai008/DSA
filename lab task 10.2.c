#include <stdio.h>
int main() {
    int n,i,j,temp;
     scanf("%d", &n);
    int nums[n];
    for( i = #0; i < n; i++) 
	{
    scanf("%d", &nums[i]);
    }
    for( i = 0; i < n - 1; i++) 
	{
        int min = i;
        for( j = i + 1; j < n; j++) 
		{
            if(nums[j] < nums[min]) 
			{
                min = j;
            }
        }
        if(min != i) 
		{
            temp = nums[i];
            nums[i] = nums[min];
            nums[min] = temp;
        }
    }

    // Output sorted array
    for( i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
