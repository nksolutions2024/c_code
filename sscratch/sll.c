#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

//written below one, to avoid entering nodes by scanf
struct node *k1, *k2;

void display();
void create_2nodes(struct node *);
void insert();
void display_legally(struct node *);

int main(){
	struct node *head;
	head = NULL;

	create_2nodes(head);
	display();

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
//				scanf("%d",&ele);
//				insertAtEnd(ele);
//				insertAtEnd(3);
				break;
			
			//segmaentation fault in 6
			case 6:
				head = k1; //it should be done by insert_function()
				display_legally(head);//ccritical thing_1(mistake2)
				break;

			case 7:
				//not tried yet(below code)
				//trying
				printf("head pointing node's data is %d\n", (head)->data);
				printf("k1-node's data is %d\n", k1->data);
				break;
/*
desd2@desd-OptiPlex-5050:~/Music/embc/c_code/sscratch$ ./a.out
-->[1]-->[2]
Enter 1-> 6->display_l 9->exit
1
Enter element to insertAtEnd: 
Enter 1-> 6->display_l 9->exit
6
entering d_l()
-->[1]-->[2]
exiting d_l() ....
Enter 1-> 6->display_l 9->exit
8
head of ll is 0x55b8b55362a0
-->[1]-->[2]
Enter 1-> 6->display_l 9->exit
7
head pointing node's data is 1
k1-node's data is 1
Enter 1-> 6->display_l 9->exit
9
desd2@desd-OptiPlex-5050:~/Music/embc/c_code/sscratch$ 

*/

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
void create_2nodes(struct node * head9){
	//struct node *k1;
	k1 = (struct node *)malloc(sizeof(struct node));
	int ele = 1;
	k1->data = ele;
	k1->next = NULL;
//	head9 = k1; mistake5 it is locally inside function
//	can't modify head by this_function
	
	//struct node *k2;
	k2 = (struct node *)malloc((sizeof(struct node)));
	//int ele = 2;
	ele = 2;
	k2->data = ele;
	k2->next = NULL;

	//node_1 next
	//k1->next = k2;
	//node_1 next modification ; linking two_nodes
	k1->next = k2;
}

void display(){
	printf("-->[%d]", k1->data);
	printf("-->[%d]", k2->data);

	printf("\n");
}

//only 1 out 2 node ; displayed
void display_legally(struct node * head8){
	printf("entering d_l()\n");
	struct node * dlt1;
	//malloc is not required for dlt1
	
	//ccritical thing_2(mistake3)
	dlt1 = head8 ; //temporarily head give; maybe rectified

	//check not missing one node
	//dlt1_compare_NULL (mistake4)
	while(dlt1 != NULL){
		printf("-->[%d]", dlt1->data);
		dlt1 = dlt1->next;
	}
	printf("\n");

	printf("exiting d_l() ....\n");
}


