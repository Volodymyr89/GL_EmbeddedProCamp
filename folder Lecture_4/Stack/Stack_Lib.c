
#include <stdio.h>
// Task: Create stack library based on linked list

// @remark This module should be based on LinkedList moduel.

// @remark Leave only one definition of "struct node"
struct node
{
	int data;
	struct node* next;
};

struct node* push(struct node* head, int data)
{
	struct node* tmp = (struct node*)malloc(sizeof(struct node));
	if (tmp == NULL)
	{
		exit(0);		// @remark Do not use "exit", just return head
	}
	tmp->data = data;
	tmp->next = head;
	head = tmp;
	return head;
}

struct node* pop(struct node *head, int *element)
{
	struct node* tmp = head;
	*element = head->data;
	head = head->next;
	free(tmp);
	return head;
}


void Read(struct node* head)
{
	struct node *current;
	current = head;
	if (current != NULL)
	{
		printf("Stack: ");
		do
		{
			printf("%d ", current->data);
			current = current->next;
		} while (current != NULL);
		printf("\n");
	}
	else
	{
		printf("The Stack is empty\n");
	}

}
int empty(struct node* head)
{
	return head == NULL ? 1 : 0;
}