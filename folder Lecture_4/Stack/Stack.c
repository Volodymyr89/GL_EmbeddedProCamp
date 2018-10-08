#include<stdio.h>
#include "Stack.h"

int main()

{
	struct node* head = NULL;
	int element;
	int number_of_elements = 0;

	while (number_of_elements < 5)
	{

		printf("Enter a number to push into the stack:\n");
		scanf_s("%d", &element);
		head = push(head, element);
		Read(head);
		number_of_elements++;
	}

	
	while (empty(head) == 0)
	{
		head = pop(head, &element);
		printf(" Popped Element %d\n", element);
		Read(head);
	}
	system("pause");
	return 0;
	
}