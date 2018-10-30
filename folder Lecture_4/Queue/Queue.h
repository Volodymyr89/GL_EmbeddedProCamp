// @remark Rename to Queue_Lib.h that it will be like module with Queue_Lib.c
void init(int *head, int *tail);
void Put(int *q, int *tail, int element);
int Get(int *q, int *head);
int empty(int head, int tail);
int full(int tail, const int size);
void Read(int *q, int head, int tail);