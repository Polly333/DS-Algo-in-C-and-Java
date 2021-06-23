import java.util.Arrays;
//Ran in cmd so no main class needed
class InsertionSort {

  void insertionSort(int array[]) {
  
    for (int j = 1; j < array.length; j++) //as first element at index = 0 already sorted
    {
      int key = array[j];
      int i = j - 1;

      // Compare key with each element on the left of it until an element smaller than it is found.
      // For descending order, change key<array[j] to key>array[j].
      while (i >= 0 && key < array[i])
      {
        array[i + 1] = array[i];
        i--;
      }
      // Place key at after the element just smaller than it.
      array[i + 1] = key;
    }
  }

  // Driver code
  public static void main(String args[]) 
  {
    int[] data = { 6, 5, 3, 1, 8, 7, 2, 4 };
    InsertionSort obj = new InsertionSort(); //Important note
    obj.insertionSort(data);
    System.out.println("Sorted Array in Ascending Order: ");
    System.out.println(Arrays.toString(data));
  }
}