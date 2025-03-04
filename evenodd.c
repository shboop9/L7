#include <stdio.h>

int main(){
	int n;
	printf("Enter a Number: ");
	scanf("%d", &n);
	
	n%2? printf("Odd Number") : printf("Even Number");
}
