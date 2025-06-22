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
    int min = arr[0];
    int max = arr[0];

    for(int i = 0;i<size;i++){
        if(min>arr[i]){
            min = arr[i];
        }
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("max = %d\n",max);
    printf("min = %d\n",min);
        
    return 0;
}