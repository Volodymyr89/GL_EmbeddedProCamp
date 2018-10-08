struct node
{
	int data;
	struct node* next;
};
struct node* push(struct node* head, int data);
struct node* pop(struct node *head, int *element);
void display(struct node* head);
int empty(struct node* head);