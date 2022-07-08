#include<stdio.h>

int main(){
	int num = 10;
	int *ptr;
	int **ptr2;
	int ***ptr3;
	
	ptr = &num;
	ptr2 = &ptr;
	ptr3 = &ptr2;
	
	printf("Address of the num is %d", ptr);
	printf("\nValue of the num is %d", *ptr);
	printf("\nValue of num through ptr2 is %d", **ptr2);
	printf("\nAddress of the num through ptr2 is %d", *ptr2);
	printf("\nAddress of the num through ptr3 is %d", ptr3);
	printf("\nValue of the num through ptr3 is %d", ***ptr3);
	
	return 0;	
}              
