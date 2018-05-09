//quick sort implementation
//steps: 1. select a pivot (last element in array)
//       2. compare element in array; for every element except pivot, if A[i]<=pivot: swap(A[wall], A[i]) 
//       3. partition the array into two part (left & right) using wall
//       3. sort left and srot right



int patition(int A[], int low, int high){
  int pivot = A[high];
  for(int i=low; i<high; i++){
    if(A[i]<pivot){
      swap(&A[i], &A[low]);
    }
  }
  swap(&A[low], &A[high]);
  return low+1; 
}
void quicksort(int A[], int low, int high){
  if(low<hight){
    int wall=patition(A[], low, high);
    quicksort(A[], low, wall-1);
    quicksort(A[], wall+1, high);
  }
}
void swap(int* a, int* b){
  int tmp=*a;
  *a=*b;
  *b=tmp;
}

int main()
{
  int A[] = {2,8,5,3,7,6,4};
  quicksort(A, 0, A.size()-1);
  return 0;
}
  

  
