#include <stdio.h>
void hanoi(int n,char start,char helper,char end){
    if(n==1){
        printf("Move disk from %c to %c\n",start,end);
        return;
    }
    hanoi(n-1,start,end,helper);
    //backtracked execution
    printf("Move disk from %c to %c\n",start,end);
    hanoi(n-1,helper,start,end);
}
int main(){
    int n;

    printf("Enter the number of disk in tower:");
    scanf("%d",&n);
    printf("The solution is:\n");
    hanoi(n,'A','B','C');

    return 0;
}

