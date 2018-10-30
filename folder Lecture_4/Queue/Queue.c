#include <stdio.h>
#include <stdlib.h>
#include "Queue.h";


// @remark This function should be in Queue_Lib module
void init(int *head, int *tail)
{
	*head = *tail = 0;
}

int main()
{
	// @remark Create (inside Queue_Lib) struct for all data of queue 
	//			and use pointer to struct for functions in Queue_Lib
	int SIZE = 5;
	int head, tail, element;
	int queue[5];

	init(&head, &tail);

	while (!full(tail, SIZE))
	{
		printf("Enter a number to Put:");
		scanf_s("%d", &element);

		Put(queue, &tail, element);

		Read(queue, head, tail);
	}
	printf("Queue is full!!!\n");
	printf("Get operation:\n");

	while (!empty(head, tail))
	{
		element = Get (queue, &head);
		printf(" element %d \n", element);

		Read(queue, head, tail);
	}
	printf("Queue is empty\n");
	system("pause");
	return 0;
}