#include "Array_FIFO.h"
#include "List_FIFO.h"

int main()
{
	Array_FIFO a(4);
	std::cout << "Add in Buffer: " << 1 << std::endl;
	a.push_back(1);
	std::cout << "Add in Buffer: " << 2 << std::endl;
	a.push_back(2);
	std::cout << "Add in Buffer: " << 3 << std::endl;
	a.push_back(3);
	std::cout << "Buff returned: " << a.pop_front() << std::endl;
	a.print();
	std::cout << "Add in Buffer: " << 4 << std::endl;
	a.push_back(4);
	std::cout << "Add in Buffer: " << 5 << std::endl;
	a.push_back(5);
	a.print();
	std::cout << "Buff returned: " << a.pop_front() << std::endl;
	a.print();
	std::cout << "Buff returned: " << a.pop_front() << std::endl;
	a.print();
	std::cout << "Add in Buffer: " << 6 << std::endl;
	a.push_back(6);
	a.print();
	std::cout << "Add in Buffer: " << 7 << std::endl;
	a.push_back(7);
	a.print();
	std::cout << "Add in Buffer: " << 8 << std::endl;
	a.push_back(8);
	a.print();
	std::cout << "Add in Buffer: " << 9 << std::endl;
	a.push_back(9);
	a.print();
	std::cout << "Buff returned: " << a.pop_front() << std::endl;
	a.print();
	std::cout << "Buff returned: " << a.pop_front() << std::endl;
	a.print();
	std::cout << "Add in Buffer: " << 10 << std::endl;
	a.push_back(10);
	a.print();
	std::cout << "Buff returned: " << a.pop_front() << std::endl;
	a.print();
	std::cout << "Buff returned: " << a.pop_front() << std::endl;
	a.print();
	std::cout << "Add in Buffer: " << 11 << std::endl;
	a.push_back(11);
	a.print();
	std::cout << "Buff returned: " << a.pop_front() << std::endl;
	a.print();
	std::cout << "Buff returned: " << a.pop_front() << std::endl;
	a.print();

	std::cout <<  std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	List_FIFO l(4);
	std::cout << "Add in Buffer: " << 1 << std::endl;
	l.push_back(1);
	std::cout << "Add in Buffer: " << 2 << std::endl;
	l.push_back(2);
	std::cout << "Add in Buffer: " << 3 << std::endl;
	l.push_back(3);
	std::cout << "Buff returned: " << l.pop_front() << std::endl;
	l.print();
	std::cout << "Add in Buffer: " << 4 << std::endl;
	l.push_back(4);
	std::cout << "Add in Buffer: " << 5 << std::endl;
	l.push_back(5);
	l.print();
	std::cout << "Buff returned: " << l.pop_front() << std::endl;
	l.print();
	std::cout << "Buff returned: " << l.pop_front() << std::endl;
	l.print();
	std::cout << "Add in Buffer: " << 6 << std::endl;
	l.push_back(6);
	l.print();
	std::cout << "Add in Buffer: " << 7 << std::endl;
	l.push_back(7);
	l.print();
	std::cout << "Add in Buffer: " << 8 << std::endl;
	l.push_back(8);
	l.print();
	std::cout << "Add in Buffer: " << 9 << std::endl;
	l.push_back(9);
	l.print();
	std::cout << "Buff returned: " << l.pop_front() << std::endl;
	l.print();
	std::cout << "Buff returned: " << l.pop_front() << std::endl;
	l.print();
	std::cout << "Add in Buffer: " << 10 << std::endl;
	l.push_back(10);
	l.print();
	std::cout << "Buff returned: " << l.pop_front() << std::endl;
	l.print();
	std::cout << "Buff returned: " << l.pop_front() << std::endl;
	l.print();
	std::cout << "Add in Buffer: " << 11 << std::endl;
	l.push_back(11);
	l.print();
	std::cout << "Buff returned: " << l.pop_front() << std::endl;
	l.print();
	std::cout << "Buff returned: " << l.pop_front() << std::endl;
	l.print();
}