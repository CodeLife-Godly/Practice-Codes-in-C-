#include <stdio.h>
int main(){
	printf("Enter the number of rows:");
	int rows;
	scanf("%d",&rows);
	for(int i = 1;i<=rows;i++){
		for(int j = rows-i;j>0;j--) 		//printing spaces
		{
		printf(" ");
		}

		for(int k = 1;k<=i;k++){
		printf("* ");
		}
	printf("\n");
	}
	return 0;
}