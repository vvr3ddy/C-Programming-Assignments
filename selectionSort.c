//Source CODE
// Assignment submission by Vishnuvardhan Reddy 


#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

void swap(int *xp, int *yp) 
{ 
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
} 

void selectionSort(int arr[], int n) 
{ 
	int i, j, min_idx; 

	for (i = 0; i < n-1; i++) 
	{ 
		min_idx = i; 
		for (j = i+1; j < n; j++) 
		if (arr[j] < arr[min_idx]) 
			min_idx = j; 

		swap(&arr[min_idx], &arr[i]); 
	} 
} 

void printArray(int arr[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 

int main() 
{ 
	srand(time(0));
	int *arr = NULL;
	unsigned int min = 0;
	unsigned int max = 0;
	printf("Enter the max value of size : ");
	scanf("%d", &max);
	printf("Enter the min value of size : ");
	scanf("%d", &min);
    int nBlock = (rand() % (max - min + 1)) + min; 
    arr = (int *)malloc(nBlock * sizeof(int));
    if(arr == NULL)
    {
        return 0;
    }
	
	int i; 
    for (i = 0; i < nBlock; i++) { 
        arr[i] = (rand() % (max - min + 1)) + min; 
    } 
	
	
	selectionSort(arr, nBlock); 
	printf("Sorted array: \n"); 
	printArray(arr, nBlock); 
	
    free(arr);
    return 1;
}


