#include "stdafx.h"
#include "queue.h"

queue::queue(int qs ) :qsize(qs) //qsize 必须要初始化列表 because 是const
{
	last = first = nullptr;
	numitem = 0;
}

queue::~queue()
{
	node *temp;
	while (first != nullptr)
	{
		temp = first;
		first = first->next;
		delete temp;
	}
}

bool queue::isempty() const
{
	return numitem == 0;
}

bool queue::isfull() const
{
	return numitem == qsize;
}

int queue::queuecount() const
{
	return numitem;
}

bool queue::enqueue(const Item& item)
{
	if (isfull())
		return false;
	node *add = new node;
	add->context = item;
	add->next = nullptr;

	if (first == nullptr)
		first = add;
	else
		last->next = add;
	last = add;
	++numitem;
	return true;
}

bool queue::dequeue(Item &item)
{
	if (isempty())
		return false;

	item = first->context;
	--numitem;
	node * temp= first;
	first = temp->next;

	delete temp;
	if (numitem == 0)
		last = nullptr;
	return true;

			
}

