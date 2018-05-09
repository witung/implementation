//merge sort
//steps: 1. separate array into left and right
//          by calculate mid of array -> if left<right: mid=(left+right)/2
//       2. merge left and right by looking first element 1,3,5| 2,4,6->1,2,3,4,5,6
//          l1=left head; l2=right head; k=pnt of new array with size(l1_size+l2_size)
//          while(l1<l1_size &&l2 <l2_size){ if(l1<l2){k=l1; l1++}else{k=l2; l2++;}}
//          if(l1<l1_size){k=l1; l1++; k++} also l2 and make array=new array
//   

void mergesort(int A[], int low, int high){
    if(low<high){
        int mid=(low+high)/2;
        mergesort(A[], low, mid);
        mergesort(A[], mid+1, high);
        merge(A[], low, mid, high);
    }
}

void merge(int A[], int low, int mid, int high){
    int size1=mid-low+1;
    int size2=high-mid;
    int l1=low, l2=mid+1;
    int k=0;
    int tmp[high-low+1];
    while(l1<size1 && l2<size2){
        if(A[l1]>A[l2]){
            tmp[k]=A[l2];
            l2++;k++;
        }else{
            tmp[k]=A[l1];
            l1++;k++;
        }
    }
    while(l1<size1){
        tmp[k]=A[l1];
        l1++; k++;
    }
    while(l2<size2){
        tmp[k]=A[l2];
        l2++; k++;
    }
    for(int i=0; i<high-low+1; i++){
        A[i]=tmp[i];
    }
}
