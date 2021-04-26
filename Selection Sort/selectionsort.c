//Sort a given set of N integer elements using Selection Sort technique and compute its time taken. Run the program for different values of N and record the time taken to sort and plot.

#include <stdio.h>
#include <time.h> 
void SelectionSort(int array[],int n);

int main()
{
  int array[100], n,i;
    printf("Please enter number of elements to sort: \n");
      scanf("%d", &n);

printf("Please enter %d numbers:\n", n);
       for(i = 0; i < n; i++){
       
    scanf("%d", &array[i]);
       }

clock_t t;
    t = clock();
    SelectionSort(array, n);
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("\nFunction SelectionSort() took %f seconds to execute! \n", time_taken);
    return 0;
return 0;
}

void SelectionSort(int array[], int n)
{
int i, j, position, swap;

for(i = 0; i < (n - 1); i++)
{
position=i;
for(j = i + 1; j < n; j++)
{
if(array[position]>array[j])
position=j;
}
  
if(position != i)
{
swap=array[i];
array[i]=array[position];
array[position]=swap;
}
}
printf("sorted array is:");
for(i = 0; i < n; i++)
printf("\n%d", array[i]);
}
