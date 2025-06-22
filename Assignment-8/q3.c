#include <stdio.h>
static int counter = 0;
void print_all_prime(int n,int divisor){
    counter = 0;
    if(n==1){
        return;
    }
    while(n%divisor == 0){
        counter ++;
        n /= divisor;
    }
    if(counter>0){
        printf("%d ",divisor);
    }
    int next_divisor = (divisor==2) ? 3 : divisor+2;
    print_all_prime(n,next_divisor);
}
int main(){
    int num;
    printf("Enter number who's prime factors you want to print:");
    scanf("%d",&num);
    print_all_prime(num,2);
    return 0;
}

