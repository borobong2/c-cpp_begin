#ifndef STACK_H
#define STACK_H



class Stack{
private:
	static const int STACKSIZE;
	
	int *pArr_;
	int size_;
	int tos_;

	Stack(const Stack& rhs);
	Stack& operator=(const Stack& rhs);
public:
	explicit Stack(int size = STACKSIZE);
	~Stack();
	
	void push(int data);
	int pop();
	
	bool isFull() const;
	bool isEmpty() const;
};

#endif
