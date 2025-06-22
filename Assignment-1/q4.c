#include <stdio.h>
int main(){
    int choice;
    printf("Choose conversion type:\n");
    printf("Enter 1 for Celsius to Fahrenheit and 2 for Fahrenheit to Celsius:");
    scanf("%d",&choice);
    if(choice == 1){
        float celsius;
        printf("Enter temperature in celsius:");
        scanf("%f",&celsius);
        float fahrenheit = (celsius*9)/5.0 + 32;
        printf(" %.2f Fahrenheit equals %.2f celsius\n",fahrenheit,celsius);
        return 0;
    }
    else if(choice==2){
        float fahrenheit;
        scanf("%f",&fahrenheit);
        float celsius = ((fahrenheit-32)*5)/9.0;
        printf("%.2f Celsius equals %.2f Fahrenheit\n",celsius,fahrenheit);
        return 0;
    }
    else{
        printf("Enter correct choice!\n");
        return 0;
    }
    }