#include "vector.h"

Vector::Vector()
{
	vector = new int[size];
}
void Vector::PushBack(int value)
{
	int* newVector = new int[size + 1];

	for (int i = 0; i < size; i++)
	{
		newVector[i] = vector[i];
	}
	newVector[size] = value;
	delete[] vector;
	vector = newVector;
	size++;

}

void Vector::PushFront(int value)
{
	int* newVector = new int[size + 1];

	for (int i = 1; i < size; i++)
	{
		newVector[i] = vector[i];
	}
	newVector[0] = value;
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