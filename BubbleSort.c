#include <stdio.h>

int main() {
    int arr[5], n, i, j, temp;

    
    printf("Enter integers:\n");
    for (i = 0; i < 5; i++)  
	{
        scanf("%d", &arr[i]);
    }
    printf("Original array is :");
	for (i=0;i<5;i++)
	{
		printf(" %d",arr[i]);
	}
   
    for (i = 0; i < 5 - 1; i++) 
	{         
        for (j = 0; j < 5 - i - 1; j++) 
		{ 
            if (arr[j] > arr[j + 1]) 
			{   
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

   
    printf("\nSorted array :");
    for (i = 0; i < 5; i++) 
	{
        printf(" %d", arr[i]);
    }
    printf("\n");

    return 0;
}
