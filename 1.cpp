#include<iostream>

using namespace std;

/*
        To apply the method explained in the hint video, we have to add two more
   parameters in the function call. This can be done by calling a helper
   function from given function. The helper function can have three parameters:
   array, start index, end index.

        Skeleton code to achieve this:
        #include <iostream>
        using namespace std;

        void quickSort(int input[], int start, int end)
        {
                // your code goes here
        }
        void quickSort(int input[], int size)
        {
                quickSort(input, 0, size - 1);
        }

*/
void swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int partition(int *A, int low, int high) {
  int i, j;
  int pivot = A[high]; // last element is the pivot

  i = low - 1;
  for (j = low; j <= high - 1; j++) {
    if (A[j] < pivot) {
      i++;
      swap(&A[i], &A[j]);
    }
  }
  swap(&A[high], &A[i + 1]);
  return i + 1;
}

void quicksort1(int *A, int low, int high) {
  if (high - low < 1)
    return;
  int pivotindex;

  pivotindex = partition(A, low, high);
  quicksort1(A, low, pivotindex - 1);
  quicksort1(A, pivotindex + 1, high);
}

void quickSort(int input[], int size) {  
  quickSort1(input, 0, size - 1);
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */

}
 
int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}


