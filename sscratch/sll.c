#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *k1, *k2;
struct node *head;
head = NULL;

void display();
void create_2nodes();
void insert();

int main(){
	create_2nodes();
	display();

	int choice;
	int ele;

	while(1)
	{
		printf("Enter 1-> 8->display 9->exit");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter element to insertAtEnd: \n");
				scanf("%d",&ele);
				insertAtEnd(ele);
				break;

			case 8:
				display();
				break;

			case 9:
				exit(0);
		}
	}
}

void insertAtEnd(int ele){
	struct node *et1;
	et1 = (struct node *)malloc(sizeof(struct node));
	et1->data = ele;
	et1->next = NULL;

	//first node creation
	if(head==NULL)
	{
		head = et1;
		return;
	}
	else
	{
		printf("head is not null\n");	
	}

}

void create_2nodes(){
	//struct node *k1;
	k1 = (struct node *)malloc(sizeof(struct node));
	int ele = 1;
	k1->data = ele;
	k1->next = NULL;
	head = k1;
	
	//struct node *k2;
	k2 = (struct node *)malloc((sizeof(struct node)));
	//int ele = 2;
	ele = 2;
	k2->data = ele;
	k2->next = NULL;

	//node_1 next
	//k1->next = k2;
}

void display(){
	printf("-->[%d]", k1->data);
	printf("-->[%d]", k2->data);

	printf("\n");
}
