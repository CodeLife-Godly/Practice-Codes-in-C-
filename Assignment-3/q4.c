#include <stdio.h>
int main(){
    int score;
    printf("Enter the score:");
    scanf("%d",&score);
    
    if(score>=85){
        printf("A+");
        return 0; 
    }
    else if(score>=75){
        printf("A");
        return 0; }
    else if(score>=65){
        printf("B+");
        return 0; }
    else if(score>=50){
        printf("B");
        return 0; }
    else if(score>=30){
        printf("C");
        return 0; }
    printf("Fail");
    return 0;
}
