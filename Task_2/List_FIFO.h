#ifndef LIST_FIFO
#define LIST_FIFO

class List_FIFO
{
private:
	struct node
	{
		int value;
		node* next;
		node* prev;
	};

private: node* head;
private: int size;
private: int cnt;
private: node* tail;
private: int index_of_tail;
private: int index_of_head;
public:
	List_FIFO(int n);
	~List_FIFO();
	void push_back(int val);
	int pop_front();
	void print();
};

#endif
