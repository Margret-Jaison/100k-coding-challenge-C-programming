/*
 ============================================================================
 Name        : sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,values[100],i,sum=0;
	setbuf(stdout,NULL);
	printf("Enter limit");
	scanf("%d",&limit);
	for(i=0;i<limit;i++)
	{
		scanf("%d",&values[i]);
	}
	for(i=0;i<limit;i++){
		sum=sum+values[i];
	}printf("sum is %d",sum);
	return EXIT_SUCCESS;
}
