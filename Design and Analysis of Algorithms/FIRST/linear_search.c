#include<stdio.h>
void linear_search(int arr[],int n,int key){
  for(int i=0;i<n;i++){
    if(arr[i]!=key){
      printf("Element %d not found at index %d\n",key,i);
    }
    else{
      printf("Element %d found at index %d\n",key,i);
      return;
    }
    printf("\n");
  }
}
int main(){
  int arr [] = {8,5,3,2,1};
  int n = sizeof(arr)/sizeof(arr[0]);
  linear_search(arr,n,1);
  return 0;
}