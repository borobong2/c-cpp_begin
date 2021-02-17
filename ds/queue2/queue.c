static int queue[100];
static int front = 0;	// top of stack
static int rear = 0;
	
void push(int data)
{
	queue[rear] = data;
	++rear;
}

int pop(void)
{
	int tmp = front;
	front++;
	
	return queue[tmp];
}

