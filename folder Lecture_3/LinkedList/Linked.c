
#include<stdio.h>
#include<stdlib.h>
#include "Linked_List.h"


int main()
{
	int new_data = 0, back = 0, i, data = 0;
	for (i = 0; i < 5;i++) //create 5 nodes
	{
		printf("\nEnter new_data:\n");
		scanf_s("%d", &new_data);
		listAdd(new_data);
		print();
	}

	printf("\nRemove last node\n");
	listRemove();

	listPrint();

	printf("\nEnter data to find:\n");
	scanf_s("%d", &data);
	if (listIs(data)) {
		printf("Entered Data is present in List\n");
	}
	else {
		printf("Entered Data is not present in List\n");
	}

	system("pause");
}