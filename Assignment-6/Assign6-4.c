#include <stdio.h>
int main(){
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    int arr2[size];

    for(int i = 0;i<size;i++){
        int num;
        printf("Enter the number:");
        scanf("%d",&num);
        arr[i]=num;
    }
    
    for(int i = 0;i<size;i++){
        arr2[i]= arr[i];
    }

    int even_count = 0, odd_count = 0;
    for(int i =0;i<size;i++){
        if(arr[i]%2==0){
            even_count +=1;
        }
        else{
            odd_count +=1;
        }
    }
    int counter = 0;
    for(int i =0;i<size;i++){
        if(arr2[i]%2 == 0){
                arr[counter]=arr2[i];
                counter+=1;
        }
    }
    for(int i =0;i<size;i++){
        if(arr2[i]%2 != 0){
            arr[counter]=arr2[i];
            counter +=1;
        }
    }

    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}