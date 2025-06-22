#include <stdio.h>
int reverse(int n){
	int reversed = 0;
	while(n!=0){
		reversed = reversed*10 + n%10;
		n /= 10;
	}
	return reversed;
}
int main(){
	int x;
	printf("Enter the number you want to reverse:");
	scanf("%d",&x);
	int y = reverse(x);
	printf("Reversed number is:%d",y);
	return 0;
}