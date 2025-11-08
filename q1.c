#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct cust_detail{
	int accNo;
	int initAmt;
	int balance;
	char custName[20];
}arr_struct[40];
struct cust_detail *arr_ptr[100]; //max 100 entries

void depositMoney(int accNo,int depAmt);
void display();
void withdrawMoney(int accNo, int withAmt);
void create(char* , int, int); //need to improve
void dummyEntries();
//void addCust();

int no_of_customer=0;

int main(){
	int choice;
	int temp2,temp3,temp4,temp5,temp6,temp7,assigningNo;
	char* ccname;
 
	arr_struct[0].accNo=888; 
	arr_struct[0].initAmt=8888;
	arr_struct[0].balance=8888; 
	strcpy(arr_struct[0].custName,"empty");
	
	while(1){
		printf("enter 1->create 2->deposit 3->withdraw 6->displayall\n");
		printf("7->exit 8->dummy_2entries \n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter name: \n");
				scanf("%s",ccname);
				printf("Enter inital amount: \n");
				scanf("%d",&temp5); //init amt
				printf("\n");
			
				//assigning acc no. and mapping
				assigningNo = 100+no_of_customer;
								
				create(ccname, temp5, assigningNo );
								
				break;

			case 2:
				printf("please enter your acc no. \n");
				scanf("%d",&temp4);
				//getchar();
				printf("enter deposit amt\n");
				scanf("%d",&temp3);
				//parameters are acc_no. and deposit_amount
				depositMoney(temp4, temp3);
				display(); //temp2 ??
				break;

			case 3:
				printf("please enter your acc no. \n");
				scanf("%d",&temp6);
				printf("enter withdraw amt\n");
				scanf("%d",&temp7);
				//parameters are acc_no. and witdraw_amt
				withdrawMoney(temp6, temp7);
				break;

			case 6: 
				display();
				break;

			case 8:
				dummyEntries();
				break;

			case 9:
				//addCust();
				break;

			case 7: 
				exit(0);
		}
	}
	
}

void addCust(){
	arr_ptr[no_of_customer] = (struct cust_detail *)malloc(sizeof(struct cust_detail));


}

void dummyEntries(){
	arr_struct[0].accNo=100; // assigned automatically
	arr_struct[0].initAmt=4000;
	arr_struct[0].balance=4000; 
	strcpy(arr_struct[0].custName,"Gopal");
	no_of_customer++; //incremented to 1
	arr_struct[1].accNo=101; // assigned automatically
	arr_struct[1].initAmt=5000;
	arr_struct[1].balance=5800; //initially balance same as initAmt
	strcpy(arr_struct[1].custName,"Gopal1");
	no_of_customer++; //incremented to 2

	printf("\ndummy entries created successfully\n");	
}

void create(char* name,int temp8, int assigningNo){
	int mappedNo = assigningNo-100;
	//below code, storing into particular struct 
	strcpy(arr_struct[mappedNo].custName, name);
	arr_struct[mappedNo].initAmt = temp8;
	arr_struct[mappedNo].balance = temp8; //balance is equal to initialAmt
	arr_struct[mappedNo].accNo = assigningNo;
	no_of_customer++; //needed to proper mapping	
}

void withdrawMoney(int accNo,int withAmt){
	//
	int temp1,tempWDAmt,mappedNo;
	tempWDAmt = withAmt;
	mappedNo = accNo-100;
	//if temp1>0(i.e balance is enough)
	temp1 = (arr_struct[mappedNo].balance - tempWDAmt);
	arr_struct[mappedNo].balance = temp1;	
}

void depositMoney(int accNo,int depAmt){
	//
	int tempAmt,mappedNo;
	tempAmt = depAmt;
	mappedNo = accNo-100;
	//updated balance
	arr_struct[mappedNo].balance = (arr_struct[mappedNo].balance + tempAmt);
}

void display(){
	for(int i=0; i<no_of_customer; i++)
	{
		printf("account No. %d \n", arr_struct[i].accNo);
		printf("Customer name %s \n", arr_struct[i].custName);
		printf("initial Amt %d \n", arr_struct[i].initAmt);
		printf("balance %d \n", arr_struct[i].balance);
		printf("\n");
		
	}
	printf("\n");
}
