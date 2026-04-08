// Binary representation using loops
#include <stdio.h>
int main()
{
    int n,b[20],i=0,j;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        b[i]=n%2;
        n=n/2;
        i++;
    }
    printf("\n Binary no is:");
    for (j=i-1;j>0;j--)
    printf("%d",b[j]);
    return 0;
}

