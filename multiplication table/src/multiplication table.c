/*
 ============================================================================
 Name        : multiplication.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i;
	setbuf(stdout,NULL);
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d*%d =%d\n",i,n,n*i);
	}
	return EXIT_SUCCESS;
}
