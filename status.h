typedef struct status {
	int id;
	int waiting_no;
} status;

void Isfull();
void Isempty();
void Enqueue(int id);
void Dequeue();
void DisplayQueue();
