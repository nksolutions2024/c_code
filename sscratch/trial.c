#include<stdio.h>

int main(){
	//int *p = 40; //segmentation fault
	
	//printf("%d\n", *p);
	//
	int *p;
	*p=40;
	printf("%d\n", *p);
}
