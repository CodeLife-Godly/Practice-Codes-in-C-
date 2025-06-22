#include <stdio.h>
void prime(int x){
	if(x<=0){
		printf("Enter positive number\n");
	}
	else if(x==1){
		printf("Neither composite nor prime\n");
	}
	else if(x==2 || x==3){
		printf("Prime no.\n");
	}
	else{
		for(int i=2;i*i<=x;i++){
			if(x%i==0){
				printf("Not prime number\n");
				return;
			}
		}
		printf("Prime number\n");
		return;
	}
}
int main(){
	int x;
	printf("Enter:");
	scanf("%d",&x);
	prime(x);
	return 0;
}