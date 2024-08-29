#include"vector.h"

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


Vector::~Vector()
{
	delete[] this->vector;
}