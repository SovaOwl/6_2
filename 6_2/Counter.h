#include <iostream>
#pragma once

class Counter
{
private:
	int num = -999;

public:
	Counter(int nume);

	int increment();
	int decrement();
	int getValue();

};