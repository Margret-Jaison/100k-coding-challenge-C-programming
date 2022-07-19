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
	int n,a[100][100],b[100][100],i,j,sum;
	setbuf(stdout,NULL);
	printf("enter the size of array");
	scanf("%d",&n);
	printf("\nenter the values of array 1\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		scanf("%d",&a[i][j]);
	}}
	printf("\nenter the values of array 2\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n sum of the array is\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			sum=a[i][j]+b[i][j];
			printf("\t%d",sum);
		}printf("\n");
	}
	return EXIT_SUCCESS;
}
