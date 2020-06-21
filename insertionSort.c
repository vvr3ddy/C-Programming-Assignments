#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, pos, j;
    for(i = 1; i<n; i++){
        pos = arr[i];
        j = i-1;
        
        while(j>=0 && arr[j]>pos) {
            arr[j+1] = arr[j];
            j = j-1;
            
        }
        arr[j+1] = pos;
    }
}

void printArray(int arr[], int n) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 

int main() 
{ 
    int arr[] = { 12, 11, 13, 5, 6 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    insertionSort(arr, n); 
    printArray(arr, n); 
  
    return 0; 
	
}
