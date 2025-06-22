#include <stdio.h>
int main(){
	int spec ;
	printf("Enter the specific value:");
	scanf("%d",&spec);
	int a = 0;
	while(a != spec){
		printf("Enter the value:");
		int x;
		scanf("%d",&x);
		a = x;
		}
	printf("Congrats, you've correctly entered the value");
	return 0;
	}
    