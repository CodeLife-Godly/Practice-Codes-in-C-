#include <stdio.h>
int main(){
    int arr[5] = {1,2,5,7,8};
    int* ptr = arr;
    for(int i=0;i<5;i++){
        printf("%d is the value and address is %p\n",*(ptr+i),(void*)ptr+i);
    } 
    
    return 0;
}
