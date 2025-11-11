#include<stdio.h>

struct node{
	int data;
	struct node *next;
};

struct node *k1, *k2;

void display();
void create_2nodes();
void insert();

int main(){

	create_2nodes();
	//display();

}

void create_2nodes(){
	//struct node *k1;
	int ele = 1;
	k1->data = ele;
	k1->next = NULL;
	
/*	//struct node *k2;
	//int ele = 2;
	ele = 2;
	k2->data = ele;
	k2->next = NULL;
*/
	//node_1 next
	//k1->next = k2;
}

void display(){
	//printf("-->[%d]", k1->data);
	//printf("-->[%d]", k2->data);

}
