/*
 ============================================================================
 Name        : larger.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2;
	setbuf(stdout,NULL);
	printf("enter 2 numbers");
	scanf("%d%d",&num1,&num2);
	if(num1>num2){
		printf("greatest number is %d",num1);
	}
	else{
		printf("greatest number is %d",num2);
	}
	return EXIT_SUCCESS;
}
