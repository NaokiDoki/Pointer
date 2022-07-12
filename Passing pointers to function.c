#include<stdio.h>
void increase(int *);

int main(){
	int a = 12;
	int *ptr;
	
	ptr = &a;
	
	printf("Before function call");
	printf("\nAddress of a is %d", ptr);
	printf("\nalue of a is %d",*ptr);
	
	increase(ptr);
	
	printf("\nAfter function call;");
	printf("\nAddress of a is %d",ptr);
	printf("\nValue of a is %d",*ptr);
	
	return 0;
}

void increase(int *p){
	*p =*p + 1;
}
