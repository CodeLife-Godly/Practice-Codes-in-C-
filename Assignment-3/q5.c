#include <stdio.h>
int main(){
    int x,y,z;
    int largest,second_largest,smallest;
    printf("Enter first number:");
    scanf("%d",&x);
    printf("Enter second number:");
    scanf("%d",&y);
    printf("Enter third number:");
    scanf("%d",&z);

    if(x>=y && x>=z){ 
        largest = x;
        second_largest = (y>=z) ? y:z;
        smallest = (y<=z) ? y:z ; 
        }
    else if(y>x && y>z){ 
        largest = y;
        second_largest = (x>z) ? x:z;
        smallest = (x<z) ? x:z;
    }
    else{ 
        largest = z;
        second_largest = (x>y) ? x:y;
        smallest = (x>y) ? y:x;
    }
    printf("Largest is %d\n",largest);
    printf("Second largest is:%d\n",second_largest);
    printf("Smallest is:%d\n",smallest);

    return 0;
}