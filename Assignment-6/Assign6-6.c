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

    for(int i=1;i<size-1;i++){
        int condition = (arr[i-1]<arr[i] & arr[i]>arr[i+1]);

        if(condition){
            printf("First Peak at index %d and element %d",i,arr[i]);
            return 0;
        }
    }
    printf("Couldn't find any peak !");
    return 0;
}

    
