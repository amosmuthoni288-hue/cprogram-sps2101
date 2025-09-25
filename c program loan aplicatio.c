#include<stdio.h>
int main() {
	int age, income;
	printf("Enter users age: \n");
	scanf("%d" , &age);
	printf("Enter users annual income: \n");
	scanf("%d" , &income);
	if(age>=20 && income>=15500) {
		printf("congratulations you qualify for a loan. \n"); 
	} else {
		printf("unfortunately we are unable to offer you a loan at this time, \n");
	}
	return 0;
}