#include<stdio.h>
#include<stdlib.h>
#include "Linked_List.h"

struct node
{
	int data;
	struct node* next;
};
struct node*head;
int main()
{
	head = NULL;
	int new_data = 0, back=0, i, data=0;
	for (i = 0; i < 5;i++) //create 5 nodes
	{
		printf("\nEnter new_data:\n");
		scanf_s("%d", &new_data);
		listAdd(new_data);
		print();
	}
	printf("\nRemoved last node\n");
	listRemove();
	print();
	printf("\nEnter data to find:\n");
	scanf_s("%d", &data);
	listls(data);
	system("pause");
}