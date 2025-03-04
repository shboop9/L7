//this is a program to check whether a number is even or odd
#include <stdio.h>

int main(){
	int n;
	printf("Enter a Number: ");
	scanf("%d", &n);
	
	n%2? printf("Odd Number") : printf("Even Number");
}
