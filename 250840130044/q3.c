#include<stdio.h>
#include<stdlib.h>

int main(){
	printf("hhello1250\n");
	
	//declaring array of 4pointers to integers
	int* arrspecial[4];
	//allocation of memory to element with index[0] 
	arrspecial[0]=(int*)malloc(sizeof(int));
	
	//dereferncing putting value as 8
	*arrspecial[0]=8;
	printf("\n%d\n", *arrspecial[0]);

	//free memory from heap
	free(arrspecial[0]);
//	exit(0);
	//we can below is not accessible after free
//	printf("\n%d\n", *arrspecial[0]);	
	
}