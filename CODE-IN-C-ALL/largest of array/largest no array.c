#include <stdio.h>

int main()
{
    int i,n,arr[100];

    printf("Enter total number of array: ");
    scanf("%d", &n);

    printf("\nEnter %d Numbers: \n",n);
    for(i = 0; i < n; ++i)
    {
       scanf("%d", &arr[i]);
    }


    for(i = 1; i < n; ++i)
    {
           if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    printf("Largest element = %d\n", arr[0]);

    return 0;
}
