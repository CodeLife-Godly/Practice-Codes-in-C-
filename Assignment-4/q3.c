#include <stdio.h>
void fabi(int N){
	int arr[N];
	arr[0] = 1;
	arr[1] = 1;

if (N>=2) {
	    for(int a = 2;a<N;a++){
	    arr[a] = arr[a-1]+arr[a-2];
	    }
	    for(int i = 0;i<N;i++){
	    printf("%d ",arr[i]);
		} 
	}
else if(N==1){ 
	printf("%d",arr[0]); 
	}
else{ 
	printf("Error, give a positive integer."); 
	}
}
int main(){
	int N;
	printf("Enter N:");
	scanf("%d",&N);
	fabi(N);
	return 0;
}