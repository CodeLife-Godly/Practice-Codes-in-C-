#include <stdio.h>
#include <math.h>
static double sum = 0, average = 0,variance=0;

void properties(double arr[]){
    double squared_sum = 0;
    for(int i=0;i<5;i++){
        sum += arr[i];
        squared_sum += pow(arr[i],2);
    }
    average = sum/5;
    variance = squared_sum/5 - average*average;
}
int main(){
    double arr[5] = {1,2,8,4,5};
    properties(arr);

    printf("Sum of numbers given is:%.1lf\n",sum);
    printf("Average of numbers given is:%.1lf\n",average);
    printf("Standard Deviation of numbers given is:%.1lf\n",sqrt(variance));
    return 0;
}