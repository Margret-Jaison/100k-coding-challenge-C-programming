/*
 ============================================================================
 Name        : grade.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float mark;
	setbuf(stdout,NULL);
	printf("enter the mark");
	scanf("%f",&mark);
	if(mark>=90 && mark<=100){
		printf("grade A");

	}else if(mark>=80 && mark<=89){
		printf("grade B");
	}
	else if(mark>=70 && mark<=79){
			printf("grade C");
		}
	else if(mark>=60 && mark<=69){
			printf("grade D");
		}
	else if(mark>=50 && mark<=59){
			printf("grade E");
		}
	else if(mark<50){
		printf("Failed");
	}
	else{
		printf("invalid mark");
	}
	return EXIT_SUCCESS;
}
