#include<stdio.h>
#include<stdlib.h>

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
				printf("case 1\n");
				break;

			case 8:
				display();
				break;

			case 9:
				exit(0);
		}
	}
}

void create_2nodes(){
	//struct node *k1;
	k1 = (struct node *)malloc(sizeof(struct node));
	int ele = 1;
	k1->data = ele;
	k1->next = NULL;
	
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
