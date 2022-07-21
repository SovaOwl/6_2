#include"Counter.h"

Counter::Counter(int nume)
{
	num = nume;
}

int Counter::increment()
{
	return num++;
}

int Counter::decrement()
{
	return num--;
}

int Counter::getValue()
{
	return num;
}