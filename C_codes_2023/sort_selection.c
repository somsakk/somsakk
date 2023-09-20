// C program to sort the array in an ascending order using selection sort
// sort_selection.c
#include <stdio.h>

// swap function, takes in addresses of the two integers
void swap(int* xp, int* yp)
{
	int temp = *xp;
	printf("swap values: %d and %d, ", *xp, *yp);
	printf("at addresses %p and %p\n", xp, yp);
	*xp = *yp;
	*yp = temp;
}

// Function to print an array
void printArray(int arr[], int size) // can also use int *arr
{
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

/*Function to perform Selection Sort.
  Selection sort is a simple sorting algorithm that repeatedly finds the minimum element
  from the unsorted part of the array and places it at the beginning of the sorted part of 
  the array until the complete array is sorted.*/
void selectionSort(int arr[], int n) // can also use int *arr
{
	int i, j, min_idx;

	// One by one move boundary of unsorted subarray
	for (i = 0; i < n - 1; i++) {
		// Find the minimum element in unsorted array
		min_idx = i;
		for (j = i + 1; j < n; j++)
			if (arr[j] < arr[min_idx])
				min_idx = j;

		// Swap the found minimum element with the first element
    if (min_idx != i) {	
			swap(&arr[i], &arr[min_idx]);
			printArray(arr, n);
		}
  }
}

// Driver code
int main()
{
	int arr[] = { 8, 23, 12, 14, 5};
	int n = sizeof(arr) / sizeof(arr[0]); // find arr size
	printf("Original array: \n");
	printArray(arr, n);
	printf("The first element is %d at address %p\n\n", *arr, arr);

	selectionSort(arr, n);
	printf("\nSorted array in Ascending order: \n");
	printArray(arr, n);
}
