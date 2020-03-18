#ifndef ARRAY_FIFO
#define ARRAY_FIFO
#include <iostream>
class Array_FIFO
{
private: int size;
private: int* buff;
private: int cnt;
private: int head;
private: int tail;
public:
	Array_FIFO(int n);
	~Array_FIFO();
	void push_back(int val);
	int pop_front();
	void print();
};
#endif


