#include<stdio.h>
int main()
{
 int i = 10;
 int *ptr = &i;
 printf("Address of x is 0x%p\n",(void*)ptr);
 return 0;
}
