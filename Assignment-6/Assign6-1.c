#include <stdio.h>
int main(){
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    
    for(int i = 0;i<size;i++){
        int num;
        printf("Enter the number:");
        scanf("%d",&num);
        arr[i]=num;
    }
    //read original array 
    printf("Original array is:");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    if(size%2==0){
        for(int i = 0;i<size;i+=2){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1]=temp;
        }
    }
    else{
        for(int i = 0;i<size-1;i+=2){
            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    printf("\nNow array is:");
    //read the array
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}