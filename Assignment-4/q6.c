#include <stdio.h>
int main(){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	if (n>0) {
	int i = 1;
	for(int z = 1;z<=n;z++){
		i = i*z;
	}
	printf("Factorial of number is: %d",i);
	}
	else if (n == 0){
	printf("Factorial of number given is %d",1);
	}
    else{
        printf("Enter positive number only!");
    }
	return 0;
}

