//Refer: https://visualgo.net/en/sorting
//ASCENDING ORDER

#include<stdio.h>
 
int main()
{
   int arr[] = {5, 6, 2 ,6, 9, 0, -1}, n = 7, i, j;
   
   for(i = 0; i < n - 1; i++)
   { 
      int swapped = 0;

      for(j = 0; j < (n - i - 1);j++)
         if(arr[j] > arr[j+1])
         {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;

            swapped = 1;
         }
      if(!swapped)
         break;
   }
         
   printf("\nArray after sorting: ");
   for(i = 0; i < n; i++)
      printf("%d ", arr[i]);
 
   return 0;
}