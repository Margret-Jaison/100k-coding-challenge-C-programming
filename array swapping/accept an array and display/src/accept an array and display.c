/*
 ============================================================================
 Name        : accept.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void getArray(int);
void displayArray(int);
int main(void) {
	int limit;
	setbuf(stdout,NULL);
	printf("enter the limit");
	scanf("%d",&limit);
	getArray(limit);
	displayArray(limit);

	return EXIT_SUCCESS;
}
void getArray(int limit){
	int values[100][100],i,j;
	setbuf(stdout,NULL);
	for(i=0;i<limit;i++){
		for(j=0;j<limit;j++){
			scanf("%d",&values[i][j]);
		}
	}
}
void displayArray(int limit)
{
	int values[100][100],i,j;
	setbuf(stdout,NULL);
	printf("the array is\n");
	for(i=0;i<limit;i++){
		for(j=0;j<limit;j++){
			printf("%d\t",values[i][j]);
		}printf("\n");
	}



}
