#include <stdio.h>
int main(){
	int num, arr[7], count = 0;
	printf("Enter the number:");
	scanf("%d",&num);
	while(num!=0)
	{
		arr[count] = num%10;
		num = num/10;
		count +=1;
	}
	if(count > 7){
		printf("Only numbers less than 8 digits are allowed");
		}
	else{
		for(int i = 0;i<count;i++)
	{
		printf("%d",arr[i]);
	}
	}
	return 0;
}