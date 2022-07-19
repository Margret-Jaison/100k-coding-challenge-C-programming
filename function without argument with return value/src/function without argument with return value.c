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

int main(void) {
	int k;
	setbuf(stdout,NULL);
	k=sum();
	printf("result is %d",k);
	return EXIT_SUCCESS;
}
int sum(){
	int a,b,c;
	setbuf(stdout,NULL);
	printf("enter 2 numbers");
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
}
