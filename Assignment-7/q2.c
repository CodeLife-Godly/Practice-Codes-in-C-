#include <stdio.h>
void swap(int* p, int* q){
    int temp = *p;
    *p = *q;
    *q = temp;
}
int main(){
    int x=10,y=30;
    printf("Before swapping: x = %d & y = %d\n",x,y);
    swap(&x , &y);          //call by reference
    printf("After swapping: x = %d & y = %d\n",x,y);

    return 0;
}



