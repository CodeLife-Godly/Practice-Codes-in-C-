#include <stdio.h>
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}
int main(){
    int x,y;
    printf("Enter first number:");
    scanf("%d",&x);
    printf("Second number:");
    scanf("%d",&y);
    if(x>0 && y>0){
        int result = gcd(x,y);
        printf("%d",result);
    }
    else{
        printf("Enter positive numbers please!");
    }
    return 0;
}
