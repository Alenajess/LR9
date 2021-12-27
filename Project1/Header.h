struct Node 
{
	int a;
	Node* prev;
	Node* next;
};

class Stack
{
public:
	Stack();
	Stack(int);
	Stack& operator=(Stack&&);
	int GetSize() const;
	bool Push(const int);
	bool Pop(int&);
	bool HasElements() const;
	bool Peek(int&);
private:
	Node* tail;
	Node* next;
	int count;
};