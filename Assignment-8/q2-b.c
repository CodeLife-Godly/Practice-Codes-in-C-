#include <stdio.h>
void reverse_non_recurse(int arr[],int size){
    int start = 0,end = size-1;
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}
void display(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int size = 12;
    int arr[12] = {23,1,2,7,9,12,23,11,56,40,35,18};
    
    printf("Before reversing array:\n");
    display(arr,size);
    printf("After reversing through non-recursive function:\n");
    reverse_non_recurse(arr,12);
    display(arr,size);

    return 0;
}
