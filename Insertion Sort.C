#include <stdio.h>

void insertionSort (int arr[], int n)
{
  int i, key, j;
  for (i = 1; i < n; i++)
    {
      key = arr[i];
      j = i - 1;
      while (j >= 0 && arr[j] > key)
	{
	  arr[j + 1] = arr[j];
	  j = j - 1;
	}
      arr[j + 1] = key;
    }
}

//  function to print an array of size n
void printArray (int arr[], int n)
{
  int i;
  for (i = 0; i < n; i++)
    printf ("%d\t", arr[i]);
  printf ("\n");
}

/* Driver program to test insertion sort */
int main ()
{
  int n = 8;
  int arr[8] = { 6, 5, 3, 1, 8, 7, 2, 4 };	// cannot put n 

  insertionSort (arr, n);	// no arr[]
  printArray (arr, n);

  return 0;
}