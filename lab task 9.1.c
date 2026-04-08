// Implementation of linear search.
#include <stdio.h>
int main ()
{
	int n,i,key ,found=-1;
	printf("Enter the number of elements :");
	scanf ("%d",&n);
	int arr[n];
	printf("Entrer the array elements :");
	for(i=0;i<n;i++);
	scanf("%d",&arr[n]);
	printf("Enter the element to search :");
	scanf("%d",&key);
	for (i=0;i<n;i++)
	if (arr[i]==key)
	{
	printf("Element is found at position %d\n",i+1);
	found =1;
	break ;	
	}	
	if(found==-1)
	printf("Element is  not found ");
	
	return 0;          	
}


