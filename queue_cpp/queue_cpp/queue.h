#ifndef QUEUE_H_
#define QUEUE_H_

typedef int Item;
class queue
{

private :
	struct node
	{
		Item context;
		node* next;
	};
	enum { Q_SIZE = 10 };

	int numitem; //��ǰ�����еĸ���;
	const int qsize;//���д�С

	node* first;
	node* last;

public:
	queue(int qs = Q_SIZE);
	~queue();

	bool isempty() const;
	bool isfull() const;
	int queuecount() const;
	bool enqueue(const Item &item );
	bool dequeue(Item &item);
};



#endif
