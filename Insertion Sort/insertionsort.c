// Sort a given set of N integer elements using Insertion Sort technique and compute its time taken.

#include <stdio.h>
#include <math.h>
#include <time.h>
 
insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void Result(int arr[], int n)
{
    int i;
    printf("Insertion sorted elements are: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{  
   
  int size;
  printf("Please enter the number of elements:");
  scanf("%d",&size);
  printf("*************************************\n");
  int arr[size];
    for(int i=0; i<size; i++)
    {
      printf("Please enter the element: ");
      scanf("%d",&arr[i]);
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    
    insertionSort(arr, n);
    
    Result(arr, n);

    clock_t t;
    t = clock();
    insertionSort(arr, n);
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("\nFunction insertionSort() took %f seconds to execute! \n", time_taken);
    return 0;
}
