bool isEven(int value)
{
	return !(value & 1);
}

int main()
{
	for(int i = 0; i < 16; i++)
	std::cout << isEven(i) << std::endl;
  return 0;
}
