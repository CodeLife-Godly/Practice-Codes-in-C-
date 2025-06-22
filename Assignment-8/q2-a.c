#include <stdio.h>
void display(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void reverse_recurse(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    
    reverse_recurse(arr,start+1,end-1);
}
int main(){
    int size = 12;
    int arr[12] = {3,1,2,7,8,12,23,11,56,48,35,18};
    
    printf("Before reversing array:\n");
    display(arr,size);
    printf("After reversing through recursive function:\n");
    reverse_recurse(arr,0,size-1);
    display(arr,size);

    return 0;
}

