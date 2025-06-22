#include <stdio.h>
int main(){
    int year;
    printf("Enter the year:");
    scanf("%d",&year);

    int condition1 = year%4==0 && year%100!=0;
    int condition2 = year%400==0;
    if(condition1 || condition2){
        printf("It is a leap year!");
        return 0;
    }
    printf("It is not a leap year!");
    return 0;
} 
/*#include <stdio.h>
int main(){
    int year;
    printf("Enter the leap year:");
    scanf("%d",&year);

    if(year%4==0){
        if(year%100!=0){
            printf("It is a leap year!");
            return 0;
        }
        else{
            if(year%400==0){
                printf("It is a leap year!");
            }
            else{
                printf("Not a leap year!");
            }
        }
        return 0;
    }
    printf("Not a leap year!");
    return 0; 
} */

