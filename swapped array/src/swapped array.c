/*
 ============================================================================
 Name        : swapped.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,n,a[100],b[100],c[100];
	setbuf(stdout,NULL);
	printf("Enter the array size");
	scanf("%d",&n);
	printf("Enter the values of array 1");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}printf("Enter the values of array 2");
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}for(i=0;i<n;i++){
		c[i]=a[i];
		a[i]=b[i];
		b[i]=c[i];

	}printf("\n swapped value of array 1");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}printf("\n swapped value of array 2");
	for(i=0;i<n;i++){
		printf("%d\t",b[i]);
	}
	return EXIT_SUCCESS;
}
