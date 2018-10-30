// @remark You should include all needed files


void Put(int *q, int *tail, int element)
{
	// @remark Add protection from array overflow (I saw that it was imlemented in Queue.c)
	q[(*tail)++] = element;
}

int Get(int *q, int *head)
{
	// @remark Add protection from array overflow (I saw that it was imlemented in Queue.c)
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