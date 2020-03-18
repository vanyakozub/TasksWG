#include "Array_FIFO.h"

Array_FIFO::Array_FIFO(int n)
{
	this->size = n;
	this->buff = new int[this->size];
	this->cnt = 0;
	this->head = 0;
	this->tail = 0;
}

Array_FIFO::~Array_FIFO()
{
	delete(this->buff);
}

void Array_FIFO::push_back(int val)
{
	this->buff[tail % size] = val;
	cnt++;
	tail++;
	if (tail == size)
		tail = 0;
	if (cnt - 1 > size)
		head = tail;
}

int Array_FIFO::pop_front()
{
	if (cnt > 0)
	{
		int result = this->buff[head];
		cnt--;
		head++;
		if (head == size)
			head = 0;
		return result;
	}
}

void Array_FIFO::print()
{
	for (int i = 0; i < size; i++)
	{
		std::cout << buff[i] << "\t";
	}
	std::cout << std::endl;
}
