#include<stdio.h>
#include<stdlib.h>
int no_of_teachers = 0; 

struct teacher_data{
	int teacher_id;
}t[40];

void display();

int main(){

	struct teacher_data *s_ptr;
	s_ptr = (struct teacher_data *)malloc(sizeof(struct teacher_data));
	
	//firstly, storing in s_ptr temporarily
	//then copying to t[0]
	//dereferencing *s_ptr
	s_ptr->teacher_id = 404; 
	t[no_of_teachers++] = *s_ptr;  //*s_ptr important





	t[1].teacher_id = 88; //assigning directlt in struct
	display();
}

void display(){
	for(int i=0; i<2; i++)
	{
		printf("[%d]\n", t[i].teacher_id);
	}
}
