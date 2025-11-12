#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

//liability
//written below one, to avoid entering nodes by scanf
struct node *k1, *k2;

void display();
void create_2nodes(struct node *);
void insertAtEnd(struct node **, int);
void display_legally(struct node *);

int main(){
	struct node *head;
	head = NULL;

//	create_2nodes(head);
//	display();

	int ele;
	int choice;
	while(1)
	{
		printf("Enter 1-> 6->display_l 9->exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter element to insertAtEnd: \n");
				scanf("%d",&ele);
				insertAtEnd(&head ,ele);//&head is important
//				insertAtEnd(&head, 3);
				break;
			
			case 6:
				head = k1; //it should be done by insert_function()
				display_legally(head);//ccritical thing_1(mistake2)
				break;

			case 8:
				printf("head of ll is %p\n", head);
//				display();
				break;

			case 9:
				exit(0);
		}
	}
}

void insertAtEnd(struct node ** special, int ele){
	struct node *et1;
	et1 = (struct node *)malloc(sizeof(struct node));
	et1->data = ele;
	et1->next = NULL;

	struct node * magic1;
	magic1 = *special;

	//first node creation
	//*special == Null is important
	if(*special==NULL)
	{
		*special = et1; //*special is important
		return;
	}
	else
	{
		printf("head is not null\n");	
	}
}

void create_2nodes(struct node * head9){
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

	//node_1 next modification ; linking two_nodes
	k1->next = k2;
}


void display_legally(struct node * head8){
	printf("entering d_l()\n");
	struct node * dlt1;
	//malloc is not required for dlt1
	
	//ccritical thing_2(mistake3)
	dlt1 = head8 ; //temporarily head give; maybe rectified

	//dlt1_compare_with_NULL (mistake4)
	while(dlt1 != NULL){
		printf("-->[%d]", dlt1->data);
		dlt1 = dlt1->next;
	}
	printf("\n");

	printf("exiting d_l() ....\n");
}


