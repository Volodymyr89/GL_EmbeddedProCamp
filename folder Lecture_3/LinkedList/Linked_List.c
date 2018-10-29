#include<stdio.h>
#include<stdlib.h>
#include "Linked_List.h"

struct node
{
	int data;
	struct node* next;
};

struct node* head;

head = NULL;

void listAdd(int new_data)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = new_data;
	temp->next = head;
	head = temp;
}

void listRemove()
{
	struct node* temp = head;
	struct node* node_remove = NULL;
	while (temp->next != NULL)
	{
		node_remove = temp;
		temp = temp->next;
	}
	if (node_remove != NULL)
		node_remove->next = NULL;
	if (temp == head)
		head = NULL;
	free(temp);
}

void print()
{
	struct node* temp = head;
	printf("List:");
	while (temp != NULL)
	{
		printf("%d", temp->data);
		temp = temp->next;
	}
}

bool listIs(int data)
{
	struct node* temp = head;
	while (temp != NULL)
	{
		if (temp->data == data)
		{
			printf("Entered Data is present in List");
			break;
		}
			printf("\nNothing Found\n");
			break;

		temp = temp->next;
	}
}