#include <stdio.h>

int main() 
{
    int i, j, min_idx, temp,arr[5];

    printf("Enter elements:\n");
    for (i = 0; i < 5; i++) 
	{
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    printf("\nOriginal array: ");
    for (i = 0; i < 5; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (i = 0; i < 5 - 1; i++) 
	{
        min_idx = i; 
        
        for (j = i + 1; j < 5; j++) 
		{
            if (arr[j] < arr[min_idx])
			{
                min_idx = j; 
            }
        }

        
        if (min_idx != i) 
		{
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }

    
    printf("Sorted array: ");
    for (i = 0; i < 5; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
