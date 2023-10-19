#include <iostream>
#include <cstdlib>
#include "Stack.h"

Stack::Stack()
{
	data = static_cast<int*>(malloc(INITIAL_CAPACITY * sizeof(int)));
	if (data == nullptr)
	{
		std::cerr << "Memory allocation failed" << std::endl;
		std::exit(EXIT_FAILURE);
	}
	size = 0;
	capacity = INITIAL_CAPACITY;
}

Stack::~Stack()
{
	free(data);
}

void Stack::push(int element)
{
	size += 1;

	if (size > capacity)
	{
		capacity = static_cast<int>(1.2 * capacity + 1);
		//std::cout << "Stack capacity: " << capacity << std::endl;
		int *new_data = static_cast<int*>(malloc(capacity * sizeof(int)));
		if (new_data == nullptr)
		{
			std::cerr << "Memory allocation failed" << std::endl;
			free(data);
			std::exit(EXIT_FAILURE);
		}

		for (int i = 0; i < size - 1; i++)
		{
			new_data[i] = data[i];
		}

		free(data);
		data = new_data;
	}

	data[size - 1] = element;
}

bool Stack::isEmpty() const
{
	return size == 0;
}

int Stack::pop()
{
	if (isEmpty())
	{
		std::cerr << "Error: Stack is empty" << std::endl;
		free(data);
		std::exit(EXIT_FAILURE);
	}
	size--;
	return data[size];
}
