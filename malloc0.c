#include<stdio.h>
#include<stdlib.h>
int no_of_teachers = 0; 

struct teacher_data{
	int teacher_id;
}t[40];

struct teacher_data *arr_ptr[16];

void display();
void display1();

int main(){
	struct teacher_data *s_ptr;
	s_ptr = (struct teacher_data *)malloc(sizeof(struct teacher_data));
	
	//firstly, storing in s_ptr temporarily
	//then copying to t[0]
	//dereferencing *s_ptr
	s_ptr->teacher_id = 404; 
	t[no_of_teachers++] = *s_ptr;  //*s_ptr important

	arr_ptr[0] = (struct teacher_data *)malloc(sizeof(struct teacher_data));
	arr_ptr[0]->teacher_id = 24;
	arr_ptr[1] = (struct teacher_data *)malloc(sizeof(struct teacher_data));
	arr_ptr[1]->teacher_id = 40;

	display();
	display1();
}

void display(){
	for(int i=0; i<2; i++)
	{
		printf("[%d]\n", t[i].teacher_id);
	}
}

void display1(){
	for(int i=0; i<2; i++)
	{
		printf("{%d}\n", arr_ptr[i]->teacher_id);
	}
}
