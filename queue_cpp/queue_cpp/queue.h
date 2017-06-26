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

	int numitem; //当前队列中的个数;
	const int qsize;//队列大小

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
