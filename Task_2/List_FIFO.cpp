#include "List_FIFO.h"

#include <iostream>


List_FIFO::List_FIFO(int n)
{
	this->size = n;
	this->cnt = 0;
	this->head = new node;
	this->tail = head;
	node* tmp = head;
	for (int i = 1; i < size; i++)
	{
		tmp->next = new node;
		//tmp->next->value = 0;
		tmp->next->prev = tmp;
		tmp = tmp->next;
		if (i == size - 1)
		{
			tmp->next = head;
			head->prev = tmp;
		}
	}
}

List_FIFO::~List_FIFO()
{
	node* tmp = head;
	for(int i = 0; i < size - 1; i++)
	{
		tmp = tmp->next;
		delete tmp->prev;
	}
	delete tmp;
}

void List_FIFO::push_back(int val)
{
	node* tmp = tail;
	tmp->value = val;
	cnt++;
	if (cnt > size)
	{
		for (int i = 0; i < size - (cnt % size + 1); i++)
		{
			tmp = tmp->next;
		}

		head = tmp;
	}
	tail = tail->next;
}

int List_FIFO::pop_front()
{
	if (cnt > 0)
	{
		int res = head->value;
		cnt--;
		head = head->next;
		return res;
	}
}

void List_FIFO::print()
{
	node* tmp = head;
	for (int i = 0; i < size; i++)
	{
		std::cout << tmp->value << "\t";
		tmp = tmp->next;
	}
	std::cout << std::endl;
}
