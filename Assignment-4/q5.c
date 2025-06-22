#include <stdio.h>
void add(int a, int b) {
    printf("%d\n", a + b);
}
void sub(int a, int b) {
    printf("%d\n", a - b);
    }
void mul(int a, int b) {
    printf("%d\n", a * b);
    }
void div(int a, int b) {
    if (b != 0) {
        printf("Quotient: %d, Remainder: %d\n", a / b, a % b);
    } else {
        printf("Error: Division by zero\n");
    }
}
int main() {
    int x, y;
    char operator;

    printf("Enter 1st number: ");
    scanf("%d", &x);

    printf("Enter 2nd number: ");
    scanf("%d", &y);

    printf("Enter a to add, s to subtract, m to multiply, d to divide: ");
    scanf(" %c", &operator); 
    switch(operator){
	case 'a' :
		add(x,y);
		break;
	case 's' :
		sub(x,y);
		break;
	case 'm' :
		mul(x,y);
		break;
	case 'd' :
		div(x,y);
		break;
	}
}