#include "Header.h"

Queue::Queue(){}

Queue::Queue(int a)
{
	next = new Node();
	next->prev = nullptr;
	next->next = nullptr;
	next->a = a;
}

Queue& Queue::operator=(Queue &&other)
{
	if (this == &other)
	{
		return *this;
	}
	delete next;
	next = other.next;
	other.next = nullptr;
}
int Queue::GetSize() const
{
	if (!HasElements()) { return 0; }
	int i = 0;
	Node* a = next;
	while (a != nullptr)
	{
		a = a->next;
		++i;
	}
	return i;
}

bool Queue::Push(const int a)
{
	Node* newnode = new Node();
	Node* checking = next;
	if (HasElements())
	{	
		while (checking->next != nullptr)
		{
		checking = checking->next;
		}
		checking->next = newnode;
	}
	else
	{
		next = newnode;
	}
	newnode->a = a;
	newnode->prev = checking;
	newnode->next = nullptr;
	return true;
}

bool Queue::Pop(int &a)
{
	if (!HasElements()) { return false; };
	Node* tempnode = next->next;
	if (next->next != nullptr)
	{
		next->next->prev = nullptr;
	}
	a = next->a;
	delete next;
	next = tempnode;
	return true;
}

bool Queue::Peek(int& a)
{
	if (!HasElements()) { return false; };
	a = next->a;
	return true;
}


bool Queue::HasElements() const
{
	if (this->next != 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}