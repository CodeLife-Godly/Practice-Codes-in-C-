#include <stdio.h>
int main(){
    int size=20;
    int arr[size];

    for(int i = 0;i<size;i++){
        int num;
        printf("Enter the number:");
        scanf("%d",&num);
        arr[i]=num;
    }
    int even=0,odd=0,positive=0,negative=0;

    for(int i =0;i<size;i++){
        if(arr[i]%2==0){
            even +=1;
            if(arr[i]>0){
                positive+=1;
            }
            else if(arr[i]<0){
                negative+=1;
            }
        }
        else{
            if(arr[i]>0){
                positive+=1;
                odd+=1;
            }
            else if(arr[i]<0){
                negative+=1;
                odd+=1;
            }
        }
    } 
    printf("Positive numbers: %d\n",positive);
    printf("Negative numbers: %d\n",negative);
    printf("Even numbers: %d\n",even);
    printf("Odd numbers: %d\n",odd);
   
    return 0;
}