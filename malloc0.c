#include<stdio.h>
#include<stdlib.h>
int no_of_teachers = 0; 

struct teacher_data{
	int teacher_id;
}t[40];

void display();

int main(){
	void *ptr;
	ptr = malloc(sizeof(struct teacher_data));

	struct teacher_data *s_ptr;
	s_ptr = (struct teacher_data *)ptr;

	t[no_of_teachers++] = *s_ptr;





	//t[0].teacher_id = 88;
	//display();
}

void display(){
	for(int i=0; i<1; i++)
	{
		printf("[%d]\n", t[0].teacher_id);
	}
}
