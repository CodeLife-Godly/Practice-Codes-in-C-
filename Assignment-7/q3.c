#include <stdio.h>
void fun(){
   printf("Hello\n");
}
int main(){
    void (*ptr)() = fun;
    printf("Base address:%p\n",(void*)ptr);
    fun();
    return 0;
}

