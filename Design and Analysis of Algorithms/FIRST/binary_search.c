#include<stdio.h>
void binary_search(int arr[],int n,int key,int low,int high){
  while(low<=high){
    int mid = low + (high - low) / 2;
    if(arr[mid]==key){
      printf("Element %d found at index %d\n",key,mid+1);
      return;
    }
    else if(arr[mid]<key){
      low = mid + 1;
      printf("Moving to the right half\n");
    }
    else{
           high = mid - 1;
           printf("Moving to the left half\n");
    }
  }
}
int main(){
  int arr[] = {1,2,3,4,5};
  binary_search(arr,5,4,0,4);
  return 0;
}