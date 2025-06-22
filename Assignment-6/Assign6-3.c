#include <stdio.h>
int main(){
    int arr[10] = {10,32,45,67,89,12,38,45,67,82};
    float sum = 0;
    int length = sizeof(arr)/sizeof(arr[0]);

    for(int i =0;i<length;i++){
        sum+= arr[i];
    }
    float average = sum/length;
    printf("Sum is: %.1f\n",sum);
    printf("Average is: %.2f\n",average);
    
    return 0;
}