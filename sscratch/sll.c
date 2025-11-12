#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *k1, *k2;
//struct node *head;
//head = NULL;

void display();
void create_2nodes();
void insert();
//mistake1
//function parameter struct node *
void display_legally(struct node *);

int main(){
	struct node *head;
	head = NULL;

	create_2nodes();
	display();

	int choice;
	int ele;

	while(1)
	{
		printf("Enter 1-> 8->display 9->exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter element to insertAtEnd: \n");
//				scanf("%d",&ele);
//				insertAtEnd(ele);
//				insertAtEnd(3);
				break;
			
			//segmaentation fault in 6
			case 6:
				display_legally(head);//ccritical thing_1(mistake2)
				break;

			case 7:
				//not tried yet(below code)
			//	printf("head pointing node's data is %d\n", (*head)->data);
				break;

			case 8:
				printf("head of ll is %p\n", head);
				display();
				break;

			case 9:
				exit(0);
		}
	}
}
/*
void insertAtEnd(int ele){
	struct node *et1;
	et1 = (struct node *)malloc(sizeof(struct node));
	et1->data = ele;
	et1->next = NULL;

	k2->next = et1;

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
*/
void create_2nodes(){
	//struct node *k1;
	k1 = (struct node *)malloc(sizeof(struct node));
	int ele = 1;
	k1->data = ele;
	k1->next = NULL;
//	head = k1;
	
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

void display_legally(struct node * head8){
	struct node * dlt1;
	dlt1 = (struct node *)malloc(sizeof(struct node));
	//ccritical thing_2(mistake3)
	dlt1 = head8 ; //temporarily head give; maybe rectified

	//check not missing one node
	while(dlt1->next != NULL){
		printf("-->[%d]", dlt1->data);
		dlt1 = dlt1->next;
	}
}


