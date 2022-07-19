/*
 ============================================================================
 Name        : function.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sum(int,int);
int main(void) {
	int a,b,c;
	setbuf(stdout,NULL);
	printf("enter 2 numbers");
	scanf("%d%d",&a,&b);
	c=sum(a,b);
	printf("result is %d",c);
	return EXIT_SUCCESS;
}
int sum(int num1,int num2){
	int result;
	setbuf(stdout,NULL);
	result=num1+num2;
	return result;
}
