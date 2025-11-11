#include<stdio.h>

int main(){
	int x;
	int *p = 40; //segmentation fault
	
	printf("%d\n", *p);
	
	/*
	int *p;
	int x;
	p = &x;
	*p=40;
	printf("%d\n", *p);
	*/
}
