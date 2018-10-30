// @remark Rename to Stack_Lib.h that it will be like module with Stack_Lib.c

// @remark Leave only one definition of "struct node"
struct node
{
	int data;
	struct node* next;
};
struct node* push(struct node* head, int data);
struct node* pop(struct node *head, int *element);
void display(struct node* head);	// @remark This function have another name
int empty(struct node* head);