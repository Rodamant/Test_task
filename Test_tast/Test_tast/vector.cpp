#include "vector.h"
#include "cassert"
#include <stdexcept>

Vector::Vector()
{
	vector = new int[size];
}
void Vector::PushBack(int value)
{
	Insert(size, value);
}

void Vector::PushFront(int value)
{
	Insert(0, value);
}

void Vector::Insert(int index, int value)
{	
	if (index < 0) {
		throw std::out_of_range("index must be >= 0");
	}
	if (index > size) {
		throw std::out_of_range("index must be <= size");
	}
		

	int* newVector = new int[size + 1];

	for (int i = 0; i < index; i++)
	{
		newVector[i] = vector[i];
	}
	newVector[index] = value;
	
	for (int j = index; j < size; j++)
	{
		newVector[j+1] = vector[j];
	}

	delete[] vector;
	vector = newVector;
	size++;
}

void Vector::PopBack()
{
	size--;
	int* newVector = new int[size];

	for (int i = 0; i < size; i++)
	{
		newVector[i] = vector[i];
	}
	delete[] vector;
	vector = newVector;
}

int Vector::Size() const
{
	return size;
}

const int& Vector::operator[](int index) const
{
	return vector[index];
}

int& Vector::operator[](int index)
{
	return vector[index];
}

void Vector::Clear()
{
	size = 0;
	int* newVector = new int[size];
	delete[] vector;
	vector = newVector;
}


Vector::~Vector()
{
	delete[] this->vector;
}