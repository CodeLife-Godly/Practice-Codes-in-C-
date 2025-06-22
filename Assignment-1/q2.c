#include <stdio.h>
int main(){
    int a = 1;
    double b = 2.43;
    float c = 3.2;
    printf("size of int = %d bytes\n",sizeof(a));
    printf("size of float = %d bytes\n",sizeof(c));
    printf("size of double = %d bytes\n",sizeof(b));
    return 0;
}