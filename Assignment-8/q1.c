#include <stdio.h>
static int recursive = 0,non_recursive = 0;

int recursive_sum(int n,int recursive){
    if(n==0){
        return recursive;
    }
    recursive += n%10;
    recursive_sum(n/10,recursive);
}
int non_recursive_sum(int n){
    while(n!=0){
        non_recursive += n%10;
        n /= 10;
    }
    return non_recursive;
}
int main(){
    int num;
    printf("Enter the 5 digit number:");
    scanf("%d",&num);
    if(num>0){
    int result = non_recursive_sum(num);
    int result2 = recursive_sum(num,recursive);
    
    printf("Through recursive function,sum is: %d\n",result2);
    printf("Through non-recursive function,sum is: %d\n",result);
    
    }
    else{
        printf("Enter positive number only!");
    }
    return 0;
}
