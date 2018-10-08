
void Put(int *q, int *tail, int element)
{
	q[(*tail)++] = element;
}

int Get(int *q, int *head)
{
	return q[(*head)++];
}

int full(int tail, const int size)
{
	return tail == size;
}

int empty(int head, int tail)
{
	return tail == head;
}

void Read(int *q, int head, int tail)
{
	int i = tail - 1;
	while (i >= head)
		printf("%d ", q[i--]);
	printf("\n");
}